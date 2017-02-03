#include <iostream>
#include <string>

using namespace std;

// Name sorter by Baja1600.


// Variables for lastname + firstname and firstname + lastname.
string firstname1, firstname2, firstname3;
string lastname1, lastname2, lastname3;

string name1, name2, name3;
string fname1, fname2, fname3;
int space;
char hang;


int main() {


	// Input
	cout << "Name (1): ";
	getline(cin, name1);
	space = name1.find(" ", 0);
	firstname1 = name1.substr(0, space);
	lastname1 = name1.substr(space + 1);

	fname1 = firstname1 + " " + lastname1;

	for (int i = 0; i < firstname1.length(); i++) {
		firstname1[i] = tolower(firstname1[i]);
		for (int j = 0; j < lastname1.length(); j++) {
			lastname1[j] = tolower(lastname1[j]);
		}
	}

	cout << "Name (2): ";
	getline(cin, name2);
	space = name2.find(" ", 0);
	firstname2 = name2.substr(0, space);
	lastname2 = name2.substr(space + 1);

	// copy of original name, for printing.
	fname2 = firstname2 + " " + lastname2;

	// making everything lowercase.
	for (int i = 0; i < firstname2.length(); i++) {
		firstname2[i] = tolower(firstname2[i]);
		for (int j = 0; j < lastname2.length(); j++) {
			lastname2[j] = tolower(lastname2[j]);
		}
	}

	cout << "Name (3): ";
	getline(cin, name3);
	space = name3.find(" ", 0);
	firstname3 = name3.substr(0, space);
	lastname3 = name3.substr(space + 1);

	fname3 = firstname3 + " " + lastname3;

	for (int i = 0; i < firstname3.length(); i++) {
		firstname3[i] = tolower(firstname3[i]);
		for (int j = 0; j < lastname3.length(); j++) {
			lastname3[j] = tolower(lastname3[j]);
		}
	}


	// if lastnames are equal.
	if (lastname1 == lastname2 || lastname1 == lastname3 || lastname2 == lastname3) {
		cout << "Found duplicate last names" << endl;
		if (firstname1 < firstname2 && firstname1 < firstname3 && firstname2 < firstname3) {
			cout << 1 << endl;
			cout << fname1 << endl;
			cout << fname2 << endl;
			cout << fname3 << endl;
		}
		if (firstname1 < firstname2 && firstname1 < firstname3 && firstname3 < firstname2) {
			cout << 2 << endl;
			cout << fname1 << endl;
			cout << fname3 << endl;
			cout << fname2 << endl;
		}
		if (firstname2 < firstname1 && firstname2 < firstname3 && firstname1 < firstname3) {
			cout << 3 << endl;
			cout << fname2 << endl;
			cout << fname1 << endl;
			cout << fname3 << endl;
		}
		if (firstname2 < firstname1 && firstname2 < firstname3 && firstname3 < firstname1) {
			cout << 4 << endl;
			cout << fname2 << endl;
			cout << fname3 << endl;
			cout << fname1 << endl;
		}
		if (firstname3 < firstname1 && firstname3 < firstname2 && firstname1 < firstname2) {
			cout << 5 << endl;
			cout << fname3 << endl;
			cout << fname1 << endl;
			cout << fname2 << endl;
		}
		if (firstname3 < firstname1 && firstname3 < firstname2 && firstname2 < firstname1) {
			cout << 6 << endl;
			cout << fname3 << endl;
			cout << fname2 << endl;
			cout << fname1 << endl;
		}
	} 
	// If firstnames are equal.
	else if (firstname1 == firstname2 || firstname1 == firstname3 || firstname2 == firstname3) {
		cout << "Found duplicate first names " << endl;
		if (lastname1 < lastname2 && lastname1 < lastname3 && lastname2 < lastname3) {
			cout << 7 << endl;
			cout << fname1 << endl;
			cout << fname2 << endl;
			cout << fname3 << endl;
		}
		if (lastname1 < lastname2 && lastname1 < lastname3 && lastname3 < lastname2) {
			cout << 8 << endl;
			cout << fname1 << endl;
			cout << fname3 << endl;
			cout << fname2 << endl;
		}
		if (lastname2 < lastname1 && lastname2 < lastname3 && lastname1 < lastname3) {
			cout << 9 << endl;
			cout << fname2 << endl;
			cout << fname1 << endl;
			cout << fname3 << endl;
		}
		if (lastname2 < lastname1 && lastname2 < lastname3 && lastname3 < lastname1) {
			cout << 10 << endl;
			cout << fname2 << endl;
			cout << fname3 << endl;
			cout << fname1 << endl;
		}
		if (lastname3 < lastname1 && lastname3 < lastname2 && lastname1 < lastname2) {
			cout << 11 << endl;
			cout << fname3 << endl;
			cout << fname1 << endl;
			cout << fname2 << endl;
		}
		if (lastname3 < lastname1 && lastname3 < lastname2 && lastname2 < lastname1) {
			cout << 12 << endl;
			cout << fname3 << endl;
			cout << fname2 << endl;
			cout << fname1 << endl;
		}
	}
	// else, just sort by lastname.
	else {
		cout << "Sorting by lastname" << endl;
		if (lastname1 < lastname2 && lastname1 < lastname3 && lastname2 < lastname3) {
			cout << 13 << endl;
			cout << fname1 << endl;
			cout << fname2 << endl;
			cout << fname3 << endl;
		}
		if (lastname1 < lastname2 && lastname1 < lastname3 && lastname3 < lastname2) {
			cout << 14 << endl;
			cout << fname1 << endl;
			cout << fname3 << endl;
			cout << fname2 << endl;
		}
		if (lastname2 < lastname1 && lastname2 < lastname3 && lastname1 < lastname3) {
			cout << 15 << endl;
			cout << fname2 << endl;
			cout << fname1 << endl;
			cout << fname3 << endl;
		}
		if (lastname2 < lastname1 && lastname2 < lastname3 && lastname3 < lastname1) {
			cout << 16 << endl;
			cout << fname2 << endl;
			cout << fname1 << endl;
			cout << fname3 << endl;
		}
		if (lastname3 < lastname1 && lastname3 < lastname2 && lastname1 < lastname3) {
			cout << 17 << endl;
			cout << fname3 << endl;
			cout << fname1 << endl;
			cout << fname2 << endl;
		}
		if (lastname3 < lastname1 && lastname3 < lastname2 && lastname2 < lastname1) {
			cout << 18 << endl;
			cout << fname3 << endl;
			cout << fname2 << endl;
			cout << fname1 << endl;
		}
	}
	// if firstnames are equal.
	// else sort by lastname.


	cin >> hang;
}