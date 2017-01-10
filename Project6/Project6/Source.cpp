#include <iostream>
#include <string>
using namespace std;

	// Very hard assignment, but fun to do! :)
	// By Baja1600

int j = 0, k = 0, i = 13, x, controller = 0;;
int Sym(int, int, int);

int main() {

	char c, hang;
	string word, crypted;


	cout << "Input string" << endl;
	getline(cin, word);
	cout << endl;
	cout << "Encrypt(1) or Decrypt(2) ?" << endl;
	cin >> int(controller);

	// - It is not possible to input a text that contains spaces. Fix!
	while (k < (word.length())) {
		if (j == 5 && i == 7) { i = 13, j = 0; }
		if (j == 5 && i == 13) { i = 7; j = 0; }
		x = int(word[k]);
		char(c) = Sym(i, x, controller);
		crypted += char(c);
		k++, j++;
	}
	cout << crypted << endl;
	cin >> hang;
}

	// This function returns the ascii value as integer. If controller is 1 its encrypt, if 2 its decrypt.
int Sym(int, int, int) {
	if (controller == 1) {
		return x + i;
	}
	else if (controller == 2) {
		return x - i;
	}
}