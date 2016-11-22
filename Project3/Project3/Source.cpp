#include <iostream>
#include <iomanip>
using namespace std;

// Palindrome.exe by Baja1600 and the internet. 
// Thank you https://www.programiz.com

// Checks if integer is more or less than 5 digits.
// Proceeds to reverse the numbers using an algorithm. Checks and prints the palindrome.
// Asks if you would like to try again.

int main() {
	int n, omvendt = 0, tilbage;
	int i = 0, k = 0;
	char hang;

	cout << "Enter an integer: ";
	cin >> n;
	cin.get();
	i = n;
	for (; i != 0; i /= 10, k++);
	if (k != 5) {
		cout << "Number has to be 5 digits" << endl;
	}
	else {
		while (n != 0) {
			tilbage = n % 10;
			omvendt = omvendt * 10 + tilbage;
			n /= 10;
		}

		cout << "Palindrome: " << omvendt << endl;
	}
	char answer;
	cout << "Would you like to try again (y / n): " << endl;
	cin >> answer;
	cin.get();
	if (answer == ('y') || answer == 'Y') {
		main();
	} else {
		return 0;
	}
}