#pragma once

// structures
const struct People {
	string firstName;
	string lastName;
	string sig;
	float height;
};

// enum for sorting function
const enum method { byName = 1, bySig = 2, byHeight = 3, byRandom = 4 };

// function prototypes
vector<People> addPerson(vector<People> &data);
vector<People> deletePerson(vector<People> &data);
vector<People> openFile(vector<People> &data);
vector<People> sortData(vector<People> &data, method);
string genSig(string, string, vector<People> &data);
void menu(vector<People> &data);
void search(vector<People>);
void printAll(vector<People>);
void saveFile(vector<People>);