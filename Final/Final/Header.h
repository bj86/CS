#pragma once

// structures
const struct People {
	string firstName;
	string lastName;
	string sig;
	float height;
	
};

const enum method { byName = 1, bySig = 2, byHeight = 3, byRandom = 4 };

// For sorting by lastname, lastname if first names are equal.
const bool nameAsc(const People &x, const People &y)
{
	if (x.lastName == y.lastName) {
		return x.firstName < x.firstName;
	}
	else {
		return x.lastName > y.lastName;
	}
}

const bool sigAsc(const People &x, const People &y) {
	return x.sig > y.sig;
}

// For sorting by height.
const bool heightDesc(const People &x, const People &y) {
	return x.height < y.height;
}

// function prototypes
vector<People> addPerson(vector<People> &data);
vector<People> deletePerson(vector<People> &data);
vector<People> openFile(vector<People> &data);
vector<People> sortData(vector<People> &data, method);
string genSig(string, string, vector<People> &data);
void search(vector<People>);
void printAll(vector<People>);
void saveFile(vector<People>);