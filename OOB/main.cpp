#include <iostream>
#include <vector>
#include <string>


#include "constants.h"

Person addPerson(Person x);
void menu(Person person, vector<Person> data);

int main() {
	Person person;
	vector<Person> data;

	// initiate menu by passing class and vector to function.
	menu(person, data);
}