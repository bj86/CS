#include <iostream>
#include <string>
using namespace std;

	// Very hard assignment, but fun to do! :)
	// By Baja1600

int main() {

	char c, hang;
	string word, encrypted, decrypted;
	cout << "Input string" << endl;
	getline(cin, word);
	encrypted = word;

	// For every 5 letters, the program changes between rot7 and rot13
	size_t i = 0;
	while ( i != encrypted.length()) {
		for (int j = 0; j != 5 && i != encrypted.length(); j++) {
			encrypted[i] += 13;
			i++;
		}
		for (int j = 0; j != 5 && i != encrypted.length(); j++) {
			encrypted[i] += 7;
			i++;
		}
	}
	i = 0;
	cout << "Encrypted word: "<< encrypted << endl;

	// Now all we have to do is reverse the process to get the Decrypted word.
	i = 0;

	while (i != encrypted.length()) {
		for (int j = 0; j != 5 && i != encrypted.length(); j++) {
			encrypted[i] -= 13;
			i++;
		}
		for (int j = 0; j != 5 && i != encrypted.length(); j++) {
			encrypted[i] -= 7;
			i++;
		}
	}

	cout << "Decrypted word: " << encrypted << endl;

	cin >> hang;
}