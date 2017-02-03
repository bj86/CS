#include <string>
#include <iostream>
#include <vector>
#include "constants.h"

using namespace std;

// input functions
void Person::setName() {
	string xName;
	cout << "Name: ";
	getline(cin, xName);
	Person::Name = xName;
}

void Person::setAddr() {
	string xAddr;
	cout << "Address: ";
	getline(cin, xAddr);
	Person::Address = xAddr;
}

void Person::setPersNr() {
	string xPersNr;
	cout << "Person NR: ";
	getline(cin, xPersNr);
	Person::persNr = xPersNr;
}

void Person::setSkoNr() {
	int xSkoNr;
	cout << "Sko størrelse: ";
	cin >> xSkoNr;
	Person::SkoNr = xSkoNr;
	cin.get();
}

// display functions
void Person::getAll() {
	cout << "Person: " << endl;
	cout << Person::Name << endl;
	cout << Person::Address << endl;
	cout << Person::persNr << endl;
	cout << Person::SkoNr << endl;
}

// function for adding Persons
Person addPerson(Person x) {
	cout << "Add person to vector" << endl;
	x.setName();
	x.setAddr();
	x.setPersNr();
	x.setSkoNr();
	return x;
}

// menu function
void menu(Person person, vector<Person> data) {
	int selection;
	cout << "### Menu ###" << endl;

	cout << "1. Add person to vector" << endl;
	cout << "2. Display all elements in vector" << endl;
	cout << "3. Exit" << endl;
	cout << "### ### ### ###" << endl;
	cout << ">> Input " << endl;
	cin >> selection;
	cin.get();

	// switch menu
	switch (selection) {
	case(1):
	// uses "normal" function to manage all member functions
		for (int i = 0; i < 3; i++) {
			data.push_back(addPerson(person));
		}
		menu(person, data);
	// uses member function of Class to print-all in vector
	case(2):
		for (int i = 0; i < data.size(); i++) {
			data[i].getAll();
		}
		menu(person, data);
	// sluta
	case(3):
		exit(0);
	}
}