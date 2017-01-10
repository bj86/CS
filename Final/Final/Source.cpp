#include <iostream> // input output stream
#include <iomanip> // console formatting
#include <vector> // vectors for holding structs.
#include <string> // strings, substr and such.
#include <fstream> // file management
#include <algorithm> // sort()
#include <random> // c++ 11 random

using namespace std;
#include "constants.h"

// final project by Baja1600.

int main() {
	cout << setprecision(2);
	cout << fixed;

	vector<People> data;

	menu(data);
}

void menu(vector<People> &data) {
	int selection = 0;
	cout << "................................................................." << endl;
	cout << "People in vector: " << size(data) << endl;
	cout << "................................................................." << endl;
	cout << setw(10) << "Menu" << endl;
	cout << "1. Add a person\n2. Print data\n3. Search\n4. Delete a person\n";
	cout << "5. Sort by name\n6. Sort by signature\n7. Sort by height\n8. Sort randomly \n";
	cout << "9. Save data \n10. Load data\n11. Quit \n";
	cout << "................................................................." << endl;
	cout << "Select an option [1 - 11] and press enter. ";
	cin >> selection, cin.get();

	// menu conditions
	if (selection > 0 && selection < 12) {
		switch (selection) {
		case(1):
			addPerson(data);
			menu(data);
		case(2):
			printAll(data);
			menu(data);
		case(3):
			search(data);
			menu(data);
		case(4):
			deletePerson(data);
			menu(data);
		case(5):
			sortData(data, byName);
			menu(data);
		case(6):
			sortData(data, bySig);
			menu(data);
		case(7):
			sortData(data, byHeight);
			menu(data);
		case(8):
			sortData(data, byRandom);
			menu(data);
		case(9):
			saveFile(data);
			menu(data);
		case(10):
			openFile(data);
			menu(data);
		case(11):
			exit(0);
		}
	} else {
		cout << "DEBUG: Invalid option. Please choose a number between 1 and 11." << endl;
		menu(data);
	}
}

	// for sorting by lastname, lastname if first names are equal.
const bool nameAsc(const People &x, const People &y)
{
	return x.lastName < y.lastName;
}

	// for sorting by signature.
const bool sigAsc(const People &x, const People &y)
{
	return x.sig < y.sig;
}

	// for sorting by height.
const bool heightDesc(const People &x, const People &y)
{
		return x.height > y.height;
}

	// Takes input from keyboard, saves to Struct and pushes to vector.
vector<People> addPerson(vector<People> &data) {
	float tmpHeight;
	int x = 0, i = 0;
	People temp;
	cout << "First name: ";
	getline(cin, temp.firstName);
	cout << "Last name: ";
	getline(cin, temp.lastName);
	temp.sig = genSig(temp.firstName, temp.lastName, data);
	cout << "Height: ";
	cin >> tmpHeight, cin.get();
	temp.height = tmpHeight;
	data.push_back(temp);
	return data;
}

	// Searches person by signature, erases from vector<Struct> where equal.
vector<People> deletePerson(vector<People> &data) {
	string input;
	bool found = false;
	cout << "Signature of person to delete?" << endl;
	getline(cin, input);
	for (int i = 0; (found != true && i < size(data)); i++) {
		if (input == data[i].sig) {
			found = true;
			data.erase(data.begin() + i);
		}
		else {
			found = false;
		}
	}
	if (found == true) {
		cout << "Person deleted from vector." << endl;
	}
	else if (found == false) {
		cout << "DEBUG: Unused or invalid signature." << endl;
	}
	return data;

}

	// Opens file, removes any linebreak and arranges data in vector<Struct>
	// Strings and vector<string> for holding data.
	// Added prompt and vector.clear()
vector<People> openFile(vector<People> &data) {
	vector<string> tmpVec1;
	People temp2;
	string fileName, answer;
	cout << "Upon opening another file, your unsaved data will be lost." << endl;
	cout << "Do you want to continue? (y / n)" << endl;
	getline(cin, answer);
	if (answer == "y" || answer == "y") {
		data.clear();
		cout << "Opening file [*.txt]" << endl;
		cout << "file: ";
		getline(cin, fileName);
		ifstream myFile(fileName);
		string tmpStr;
		// Storing our data in a temporary vector.
		while (getline(myFile, tmpStr, '|')) {
			tmpStr.erase(remove(tmpStr.begin(), tmpStr.end(), '\n'), tmpStr.end());
			tmpVec1.push_back(tmpStr);
		}
		myFile.close();
		int j = 0, k = 1, h = 2, g = 3;
		// Appending our vector to a vector<struct>, 4 at a time.
		// If you need to add another column of data, increase j, k, h, g to 5.
		for (int i = 0; i < size(tmpVec1) / 4; i++) {
			temp2.firstName = tmpVec1[j], temp2.lastName = tmpVec1[k];
			temp2.sig = tmpVec1[h], temp2.height = stof(tmpVec1[g]);
			data.push_back(temp2);
			j += 4, k += 4, h += 4, g += 4;
		}
		return data;
	} 
	else if (answer == "n" || answer == "N") {
		menu(data);
	}
}
	// Sorting vector, takes enum as parameter.
vector<People> sortData(vector<People> &data, method e) {
	switch (e) {
	case(byName):
		sort(data.begin(), data.end(), nameAsc);
		break;
	case(bySig):
		sort(data.begin(), data.end(), sigAsc);
		break;
	case(byHeight):
		sort(data.begin(), data.end(), heightDesc);
		break;
	case(byRandom):
		auto random = default_random_engine();
		shuffle(data.begin(), data.end(), random);
		break;
	}
	return data;
}

	// Saves file to disk. One person per line.
void saveFile(vector<People> data) {
	string fileName;
	cout << "Saving file [*.txt]" << endl;
	cout << "Save as: ";
	getline(cin, fileName);
	ofstream myFile(fileName);
	for (int i = 0; i < size(data); i++) {
		myFile << data[i].firstName + "|";
		myFile << data[i].lastName + "|";
		myFile << data[i].sig + "|";
		myFile << data[i].height << "|" << endl;
	}
	myFile.close();
}

	// Generates an unique signature, checks if already exists.
	// Transforms to lower case.
string genSig(string x, string y, vector<People> &data) {
	string signature;
	int inc = 10;
	while (x.length() < 3) {
		x += "x";
	}
	while (y.length() < 3) {
		y += "x";
	}
	for (int i = 0; i < size(data); i++) {
		if (data[i].sig == (x.substr(0, 3) + y.substr(0, 3) + to_string(inc))) {
			inc++;
		}
	}
	signature = x.substr(0, 3) + y.substr(0, 3) + to_string(inc);
	transform(signature.begin(), signature.end(), signature.begin(), tolower);
	return signature;
}

	// Searches the vector a signature equal to input.
void search(vector<People> data) {
	string input;
	bool found = false;
	int pos = 0;
	cout << endl;
	cout << "Search for a person" << endl;
	cout << "Person signature: ";
	getline(cin, input);
	// if not found != true and int(i) is less than size of vector, keep searching.
	// if found, set bool to true and store i to pos.
	for (int i = 0; (found != true && i < size(data)); i++) {
		if (data[i].sig == input) {
			found = true, pos = i;
		} else {
			found = false;
		}
	}
	// Using bool(found) to determine if to print or not to print.
	if (found == true) {
		cout << "................................................................." << endl;
		cout << setw(10) << "First name";
		cout << setw(15) << "Last name";
		cout << setw(15) << "Signature";
		cout << setw(15) << "Height" << endl;
		cout << setw(10) << data[pos].firstName;
		cout << setw(15) << data[pos].lastName << setw(10);
		cout << setw(15) << data[pos].sig << setw(10);
		cout << setw(15) << data[pos].height << endl << setw(10);
		cout << "................................................................." << endl;
	} else {
		cout << "DEBUG: Unused or invalid signature." << endl;
	}
}

	// Prints all data from vector<Struct>
void printAll(vector<People> data) {
	cout << endl;
	cout << setw(5) << "#";
	cout << setw(15) << "Signature";
	cout << setw(15) << "First name";
	cout << setw(15) << "Last name";
	cout << setw(15) << "Height" << endl;
	cout << endl;
	for (int i = 0; i < size(data); i++) {
		cout << setw(5) << right << i;
		cout << setw(15) << right << data[i].sig << setw(10);
		cout << setw(15) << right << data[i].firstName;
		cout << setw(15) << right << data[i].lastName << setw(10);
		cout << setw(15) << right << data[i].height << setw(10) << endl;
	}
}