#pragma once
using namespace std;

// lab2-uppg1 Name class
class Name
{
	private:
		string firstName;
		string lastName;
	public:
		void setFirstName(string xfirstName);
		void setLastName(string xlastName);
		string const getFirstName();
		string const getLastName();
};

// lab2-uppg2 Address class
class Address
{
	private:
		string post;
		string town;
		string street;
	public:
		void setPost(string x);
		void setStreet(string y);
		void setTown(string z);
		string const getTown();
		string const getPost();
		string const getStreet();
};

