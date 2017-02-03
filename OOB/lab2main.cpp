#include <iostream>
#include <string>
#include "lab2header.h"

using namespace std;

int main() {
	Name name;
	char hang;

	// lab2-uppg1 - name class

	string xfirstName = "Bardur", xlastName = "Jacobsen";

	// testing set-functions.
	name.setFirstName(xfirstName);
	name.setLastName(xlastName);

	// testing get-functions.
	cout << name.getFirstName() << endl;
	cout << name.getLastName() << endl;

	cin >> hang;

	// lab2-uppg2 - address class

	Address address;
	string xPostNr = "420", xStreet = "Heygsmannavegur 5", xTown = "Torshavn";

	address.setPost(xPostNr);
	address.setStreet(xStreet);
	address.setTown(xTown);

	cout << address.getStreet() << endl;
	cout << address.getPost() << endl;
	cout << address.getTown() << endl;

	cin >> hang;
}