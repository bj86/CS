#include <iostream>
#include <iomanip>
using namespace std;

// Palindrome.exe by Baja1600 and the internet. 
// Thank you https://www.programiz.com

// Checks if integer is more or less than 5 digits.
// Proceeds to reverse the numbers using an algorithm. Checks if result is a palindrome and prints to console.
// Asks if you would like to try again.

int main() {
	int n, umvent = 0, eftir, temp;
	int i = 0, k = 0;
	char answer;


	cout << "Enter an integer: ";
	cin >> n;
	cin.get();
	temp = n;

	// These variables are copies of cin input, used for creating and checking palindromes. 
	i = n;
	for (; i != 0; i /= 10, k++);
	if (k != 5) {
		cout << "Number has to be 5 digits" << endl;
	}

	// We create the first palindrome
	else {
		while (n != 0) {
			eftir = n % 10;
			umvent = umvent * 10 + eftir;
			n /= 10;
		}
		cout << "Palindrome: " << umvent << endl;

	// We put our palindrome into the equation to see if our result is equal to first input
	n = umvent;
	umvent = 0;
	while (n != 0) {
		eftir = n % 10;
		umvent = umvent * 10 + eftir;
		n /= 10;
	}
	if (umvent == temp) {
		cout << "This is a palindrome!" << endl;
	}
	else {
		cout << "This is not a palindrome." << endl;
	}

	// Repeater
	}
	cout << "Would you like to try again (y / n): " << endl;
	cin >> answer;
	cin.get();
	if (answer == ('y') || answer == 'Y') {
		main();
	}
	if (answer == ('n') || answer == ('N')) {
		return 0;
	}
	else {
		cerr << "Bad input";
	}
}
