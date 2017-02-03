#include <iostream>
#include <string>
#include "lab2header.h"
using namespace std;

// Lab2-uppg1 - name class function definitions

void Name::setFirstName(string xfirstName){
	firstName = xfirstName;
}

void Name::setLastName(string xlastName) {
	lastName = xlastName;
}

string const Name::getFirstName() {
	return Name::firstName;
}

string const Name::getLastName() {
	return Name::lastName;

}

// Lab2-uppg2 - address class function definitions

void Address::setPost(string x) {
	post = x;
}

void Address::setStreet(string y) {
	street = y;
}

void Address::setTown(string z) {
	town = z;
}

string const Address::getPost() {
	return Address::post;
}

string const Address::getStreet() {
	return Address::street;
}

string const Address::getTown() {
	return Address::town;
}