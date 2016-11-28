#include <iostream>
#include <string>

using namespace std;

// Name sorter by Baja1600.


// Variables for lastname + firstname and firstname + lastname.
string firstname1, firstname2, firstname3;
string lastname1, lastname2, lastname3;

string name1, name2, name3;
string fname1, fname2, fname3;


int main() {

	// Input
	cout << "Firstname (1): ";
	cin >> firstname1;
	cout << "Lastname (1): ";
	cin >> lastname1;
	name1 = lastname1 + " " + firstname1;
	fname1 = lastname1 + " " + firstname1;

	cout << "Firstname (2): ";
	cin >> firstname2;
	cout << "Lastname (2): ";
	cin >> lastname2;
	name2 = lastname2 + " " + firstname2;
	fname2 = lastname2 + " " + firstname2;

	cout << "Firstname (3): ";
	cin >> firstname3;
	cout << "Lastname (3): ";
	cin >> lastname3;
	name3 = lastname3 + " " + firstname3;
	fname3 = lastname3 + " " + firstname3;
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
			cout << fname1 << endl;
			cout << fname2 << endl;
			cout << fname3 << endl;
		}
		else if ((firstname1 < firstname2) && (firstname1 < firstname3) && (firstname2 < firstname3)) {
			cout << fname1 << endl;
			cout << fname3 << endl;
			cout << fname2 << endl;
		}
		else if ((firstname2 < firstname1) && (firstname2 < firstname3) && (firstname1 < firstname2)) {
			cout << fname2 << endl;
			cout << fname1 << endl;
			cout << fname3 << endl;
		}
		else if ((firstname2 < firstname1) && (firstname2 < firstname3) && (firstname3 < firstname1)) {
			cout << fname2 << endl;
			cout << fname3 << endl;
			cout << fname1 << endl;
		}
		else if ((firstname3 < firstname1) && (firstname3 < firstname2) && (firstname2 < firstname1)) {
			cout << fname3 << endl;
			cout << fname2 << endl;
			cout << fname1 << endl;
		}
		else if ((firstname3 < firstname1) && (firstname3 < firstname2) && (firstname1 < firstname2)) {
			cout << fname3 << endl;
			cout << fname1 << endl;
			cout << fname2 << endl;
		}
	}


	system("Pause");
}