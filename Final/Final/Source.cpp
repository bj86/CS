#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

#include "Header.h"


int main() {
	cout << setprecision(2);
	cout << fixed;

	vector<People> data;
	openFile(data);
	//sortData(data, byName);
	addPerson(data);
	saveFile(data);
	printAll(data);
	//search(data);
	//deletePerson(data);
	//cout << size(data) << endl;
	system("pause");
}

vector<People> addPerson(vector<People> &data) {
	float tmpHeight;
	int x = 0, i = 0;
	People temp;
	cout << "Amount of people to store? ";
	cin >> x, cin.get();
	for (x, i; i < x; i++) {
		cout << "First name: ";
		getline(cin, temp.firstName);
		cout << "Last name: ";
		getline(cin, temp.lastName);
		temp.sig = genSig(temp.firstName, temp.lastName, data);
		cout << "Your height: ";
		cin >> tmpHeight, cin.get();
		temp.height = tmpHeight;
		data.push_back(temp);
	}
	return data;
}

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
		cout << "Unused or invalid signature." << endl;
	}
	return data;

}

vector<People> openFile(vector<People> &data) {
	// For holding local strings while processing.
	vector<string> tmpVec1;
	People temp2;
	string fileName;
	cout << "Opening file [*.txt]" << endl;
	cout << "file: ";
	getline(cin, fileName);
	ifstream myFile(fileName);
	string tmpStr;
	// Storing our data in a vector.
	while (getline(myFile, tmpStr, '|')) {
		tmpStr.erase(remove(tmpStr.begin(), tmpStr.end(), '\n'), tmpStr.end());
		tmpVec1.push_back(tmpStr);
	}
	myFile.close();
	int j = 0, k = 1, h = 2, g = 3;
	// Appending our vector to a vector<struct>
	for (int i = 0; i < size(tmpVec1) / 4; i++) {
		temp2.firstName = tmpVec1[j], temp2.lastName = tmpVec1[k];
		temp2.sig = tmpVec1[h], temp2.height = stof(tmpVec1[g]);
		data.push_back(temp2);
		j += 4, k += 4, h += 4, g += 4;
	}
	return data;
}

vector<People> sortData(vector<People> &data, method e) {
	switch (e) {
	case(byName):
		sort(data.begin(), data.end(), nameAsc);
	case(bySig):
		sort(data.begin(), data.end(), sigAsc);
	case(byHeight):
		sort(data.begin(), data.end(), heightDesc);
	}
	return data;
}

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
	return signature;
}

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
	// using bool(found) to determine if to print or not to print.
	if (found == true) {
		cout << "......................................................." << endl;
		cout << setw(10) << "First name";
		cout << setw(15) << "Last name";
		cout << setw(15) << "Signature";
		cout << setw(15) << "Height" << endl;
		cout << setw(10) << data[pos].firstName;
		cout << setw(15) << data[pos].lastName << setw(10);
		cout << setw(15) << data[pos].sig << setw(10);
		cout << setw(15) << data[pos].height << endl << setw(10);
		cout << "......................................................." << endl;
	} else {
		cout << "Unused or invalid signature." << endl;
	}
}

void printAll(vector<People> data) {
	cout << "......................................................." << endl;
	cout << "Elements in vector: " << size(data) << endl;
	cout << "......................................................." << endl;
	cout << setw(10) << "First name";
	cout << setw(15) << "Last name";
	cout << setw(15) << "Signature";
	cout << setw(15) << "Height" << endl;
	cout << endl;
	for (int i = 0; i < size(data); i++) {
		cout << setw(10) << right << data[i].firstName;
		cout << setw(15) << right << data[i].lastName << setw(10);
		cout << setw(15) << right << data[i].sig << setw(10);
		cout << setw(15) << right << data[i].height << setw(10) << endl;
	}
	cout << "......................................................." << endl;
}