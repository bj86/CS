#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>

using namespace std;

// Menu variables
char hang;

// Function prototypes
int dice();
int minutes();
int price();


int main()
{
	price();

	// Pause
	cin >> hang;
}

int dice() {
	// dice variables
	int one=0, two=0, three=0, four=0, five=0, six=0;
	float roll, x;
	cout << "How many times to roll?" << endl;
	cin >> x;

	cout << "You roll the dice.." << endl;
	srand(time(0));
	for (int i = 0; i < x; i++)
	{
		int roll = (int)(1 + rand() % 6);
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
	cout << "(1): " << one << setw(3) << float((one / x) * 100) << "%" << setw(6);
	cout << "(2): " << two << setw(3) << float((two / x) * 100) << "%" << setw(6);
	cout << "(3): " << three << setw(3) << float((three / x) * 100) << "%" << endl;
	cout << "(4): " << four << setw(3) << float((four / x) * 100) << "%" << setw(6);
	cout << "(5): " << five << setw(3) << float((five / x) * 100) << "%" << setw(6);
	cout << "(6): " << six << setw(3) << float((six / x) * 100) << "%" << endl;
	return 0;
}

int minutes() {
	string n1, n2, timestring1, timestring2;
	int h1, h2, m1, m2;
	int calltime, fullrate, discount;

	// Input
	cout << "Start of call (format, HH:MM)" << endl;
	cin >> n1;

	cout << "End of call (format, HH:MM)" << endl;
	cin >> n2;

	// Call start
	timestring1.insert(0, n1, 0, 2), timestring2.insert(0, n1, 3, 5);
	h1 = stoi(timestring1, 0, 10), m1 = stoi(timestring2, 0, 10);
	timestring1 = "", timestring2 = "";

	// Call end
	timestring1.insert(0, n2, 0, 2), timestring2.insert(0, n2, 3, 5);
	h2 = stoi(timestring1, 0, 10), m2 = stoi(timestring2, 0, 10);

	// Calculate time spent in each rate.
	if ((h1 == 8 && m1 >= 00) || (h1 > 8) && ((h2 < 23) && m2 < 59)) {
		fullrate = ((h1 + (h2 - h1) - 18) * 60) + (m2 - 30);
		discount = ((h2 - h1) * 60 + (m2 - m1) - fullrate);
	}

	cout << ((h1 + (h2 - h1) - 24) * 60) + (m2 - m1) << endl;

	cout << fullrate << endl;
	cout << discount << endl;

	// Returning calltime to use it in other function.
	calltime = (h2 - h1) * 60 + (m2 - m1);
	cout << calltime << endl;
	return calltime;

}

int price() {
	int total;
	int const SEK = 4;
	total = minutes() * SEK;
	return total;

}
