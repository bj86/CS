#pragma once
using namespace std;

class Person 
{
private:
	string Name;
	string Address;
	string persNr;
	int SkoNr;

public:
	// input functions
	void setName();
	void setAddr();
	void setPersNr();
	void setSkoNr();

	// display functions
	void getAll();
};