#include <iostream>
#include <cstdlib>
#include <random>
#include <string>
#include <iomanip>

using namespace std;

// Function declarations
void menu();
void dice();
void ringpling();
void minutes(int &h1, int &h2, int &m1, int &m2);
void price(int &length, int &r1, int &r2, int &r3);


int main()
{	
	menu();
}

void menu() {
	int d;

	cout << "Actions: " << endl;
	cout << "1. DiceSim.exe" << endl;
	cout << "2. RingPling.exe" << endl;
	cout << "3. Exit" << endl;
	cout << endl;

	cout << "[Select an action]" << endl;
	cin >> d;
	cout << endl;

	if (d > 0 && d < 4) {

		if (d == 1) {
			dice();
		}
		else if (d == 2) {
			ringpling();
		}
		else if (d == 3) {
			exit(0);
		}
	}
	else {
		cout << "[Pick a number between 1 and 3]" << endl;
		menu();
	}

}

void dice() {
	// dice variables
	int one=0, two=0, three=0, four=0, five=0, six=0;
	float roll = 0, x = 0, i = 0;
	default_random_engine rd;
	cout << fixed << setprecision(2);

	cout << "How many times to roll?" << endl;
	cin >> x;

	cout << "You roll the dice.." << endl;
	for (i, x; i < x; i++) {
		uniform_int_distribution<int> e(1, 6);
		int roll = e(rd);
		if (roll == 1) { one++; }
		if (roll == 2) { two++; }
		if (roll == 3) { three++; }
		if (roll == 4) { four++; }
		if (roll == 5) { five++; }
		if (roll == 6) { six++; }
		cout << roll << setw(2);
	}

	cout << endl;
	cout << "Count & Relative frequency" << endl;
	cout << "(1): " << one << setw(10) << float((one / x) * 100) << "%" << setw(10);
	cout << "(2): " << two << setw(10) << float((two / x) * 100) << "%" << setw(10);
	cout << "(3): " << three << setw(10) << float((three / x) * 100) << "%" << endl;
	cout << "(4): " << four << setw(10) << float((four / x) * 100) << "%" << setw(10);
	cout << "(5): " << five << setw(10) << float((five / x) * 100) << "%" << setw(10);
	cout << "(6): " << six << setw(10) << float((six / x) * 100) << "%" << endl;
	cout << endl;
	menu();
}

void ringpling()
{
	string n1, n2, timestring1, timestring2;
	int h1, h2, m1, m2;
	size_t pos1;
	cout << fixed;
	cout << setprecision(2);

	// Input times
	cout << "Start (HH:MM or H:MM) ";
	cin >> n1;
	cout << "Stop (HH:MM or H:MM) ";
	cin >> n2;
	cin.get();

	// HH:MM format
	if (n1.length() == 5 && n2.length() == 5) {
		pos1 = 1;
	}

	// H:MM format
	if (n1.length() == 4 && n2.length() == 4) {
		pos1 = 0;
	}
	else if (n1.length() < 4 || n2.length() < 4) {
		cout << "Bad format. Please try again." << endl;
		ringpling();
	}

	if (n1.length() != 0 && n2.length() != 0) {

		// Start of call. Stoi() cuts out numbers and stores as int.
		timestring1.insert(0, n1, 0, pos1 + 2), timestring2.insert(0, n1, pos1 + 3, pos1 + 5);
		h1 = stoi(timestring1, 0, 10), m1 = stoi(timestring2, 0, 10);

		// Clearing temporary strings for next input.
		timestring1 = "", timestring2 = "";

		// End of call. Same as above.
		timestring1.insert(0, n2, 0, pos1 + 2), timestring2.insert(0, n2, pos1 + 3, pos1 + 5);
		h2 = stoi(timestring1, 0, 10), m2 = stoi(timestring2, 0, 10);

		if ((h1 <= h2) && (m1 < 59) && (m2 <= 59)) {

			// This bit does most of the printing.
			cout << endl;
			cout << "START" << setw(12) << "STOP" << setw(12) << "LENGTH" << setw(12) << "SEK" << endl;
			cout << n1 << setw(12) << n2 << setw(12);

			// Parse values by reference.
			minutes(h1, h2, m1, m2);
		}
		else {
			cout << endl;
			cout << "[HH (00 - 23), MM (00 - 59)]" << endl;
			cout << "[Start has be lower than Stop]" << endl;
			cout << endl;
			ringpling();
		}
	}
	else {
		cout << "Please input start/stop. HH:MM or H:MM" << endl;
		ringpling();
	}
}


void minutes(int &h1, int &h2, int &m1, int &m2) 
{
	// t1, t2, t3 represent the time limits as constants.
	int const t1 = 480, t2 = 1110, t3 = 1439;
	int length, r1 = 0, r2 = 0, r3 = 0;
	int x, j = 0;

	// Storing length as minutes, in a local variable.
	length = (h2 - h1) * 60 + (m2 - m1);

	// Calculate time spent in each rate. Variable x is the starting point.
	x = (h1 * 60 + m1);
	
	for (x, j; j < length; x++, j++)
	{
		if (x < t1)
		{
			r1++;
		}
		if (x >= t1 && x < t2)
		{
			r2++;
		}
		if (x >= t2 && x < t3)
		{
			r3++;
		}
	}
	// Parse the the values to other function by reference.
	price( length, r1, r2, r3);
}

void price(int &length, int &r1, int &r2, int &r3) 
{
	double const MOMS = 1.25, RABAT = 0.85, SEK = 4.00, z1 = 0.35, z2 = 1.00;
	int d;

	// Storing results for better formatting and readability.
	double result1 = (SEK * r1 * z1 * MOMS * RABAT) + (SEK * r2 * z2 * MOMS * RABAT) + (SEK * r3 * z1 * MOMS * RABAT);
	double result2 = (SEK * r1 * z1 * MOMS) + (SEK * r2 * z2 * MOMS) + (SEK * r3 * z1 * MOMS);

	if (length > 30) {
		cout << length << setw(12) << result1;
	}
	else {
		cout << length << setw(12) << result2 << endl;
	}
	// Try again?
	cout << endl << endl;
	cout << "[Press 1 to run it again, any other key to quit]" << endl;
	cin >> d;
	if (d == 1) {
		ringpling();
	} else {
		exit(0);
	}
}
