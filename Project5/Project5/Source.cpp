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

	cout << "Name (2): ";
	getline(cin, name2);
	space = name2.find(" ", 0);
	firstname2 = name2.substr(0, space);
	lastname2 = name2.substr(space + 1);

	fname2 = firstname2 + " " + lastname2;

	cout << "Name (3): ";
	getline(cin, name3);
	space = name3.find(" ", 0);
	firstname3 = name3.substr(0, space);
	lastname3 = name3.substr(space + 1);

	fname3 = firstname3 + " " + lastname3;


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


	cin >> hang;
}