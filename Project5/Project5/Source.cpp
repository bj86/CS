#include <iostream>
#include <string>

using namespace std;

string firstname1, firstname2, firstname3;
string lastname1, lastname2, lastname3;
string name1, name2, name3;

int i;

int main() {

	cout << "Firstname (1): ";
	cin >> firstname1;
	cout << "Lastname (1): ";
	cin >> lastname1;
	name1 = lastname1 + ", " + firstname1;

	cout << "Firstname (2): ";
	cin >> firstname2;
	cout << "Lastname (2): ";
	cin >> lastname2;
	name2 = lastname2 + ", " + firstname2;

	cout << "Firstname (3): ";
	cin >> firstname3;
	cout << "Lastname (3): ";
	cin >> lastname3;
	name3 = lastname3 + ", " + firstname3;
	cout << endl;

	// Checking if any last names are equal. 
	if ((lastname1 != lastname2) && (lastname1 != lastname3) && (lastname2 != lastname3)) {
		if ((lastname1 < lastname2) && (lastname1 < lastname3) && (lastname2 < lastname3)) {
			cout << name1 << endl;
			cout << name2 << endl;
			cout << name3 << endl;
		}
		else if ((lastname1 < lastname2) && (lastname1 < lastname3) && (lastname2 < lastname3)) {
			cout << name1 << endl;
			cout << name3 << endl;
			cout << name2 << endl;
		}
		else if ((lastname2 < lastname1) && (lastname2 < lastname3) && (lastname1 < lastname2)) {
			cout << name2 << endl;
			cout << name1 << endl;
			cout << name3 << endl;
		}
		else if ((lastname2 < lastname1) && (lastname2 < lastname3) && (lastname3 < lastname1)) {
			cout << name2 << endl;
			cout << name3 << endl;
			cout << name1 << endl;
		}
		else if ((lastname3 < lastname1) && (lastname3 < lastname2) && (lastname2 < lastname1)) {
			cout << name3 << endl;
			cout << name2 << endl;
			cout << name1 << endl;
		}
		else if ((lastname3 < lastname1) && (lastname3 < lastname2) && (lastname1 < lastname2)) {
			cout << name3 << endl;
			cout << name1 << endl;
			cout << name2 << endl;
			}
	// If equal found, switch to sorting by first name. 
	} else {
		if ((firstname1 < firstname2) && (firstname1 < firstname3) && (firstname2 < firstname3)) {
			cout << firstname1 + " " + lastname1 << endl;
			cout << firstname2 + " " + lastname2 << endl;
			cout << firstname3 + " " + lastname3 << endl;
		}
		else if ((firstname1 < firstname2) && (firstname1 < firstname3) && (firstname2 < firstname3)) {
			cout << firstname1 + " " + lastname1 << endl;
			cout << firstname3 + " " + lastname3 << endl;
			cout << firstname2 + " " + lastname2 << endl;
		}
		else if ((firstname2 < firstname1) && (firstname2 < firstname3) && (firstname1 < firstname2)) {
			cout << firstname2 + " " + lastname2 << endl;
			cout << firstname1 + " " + lastname1 << endl;
			cout << firstname3 + " " + lastname3 << endl;
		}
		else if ((firstname2 < firstname1) && (firstname2 < firstname3) && (firstname3 < firstname1)) {
			cout << firstname2 + " " + lastname2 << endl;
			cout << firstname3 + " " + lastname3 << endl;
			cout << firstname1 + " " + lastname1 << endl;
		}
		else if ((firstname3 < firstname1) && (firstname3 < firstname2) && (firstname2 < firstname1)) {
			cout << firstname3 + " " + lastname3 << endl;
			cout << firstname2 + " " + lastname2 << endl;
			cout << firstname1 + " " + lastname1 << endl;
		}
		else if ((firstname3 < firstname1) && (firstname3 < firstname2) && (firstname1 < firstname2)) {
			cout << firstname3 + " " + lastname3 << endl;
			cout << firstname1 + " " + lastname1 << endl;
			cout << firstname2 + " " + lastname2 << endl;
		}
	}


	system("Pause");
}