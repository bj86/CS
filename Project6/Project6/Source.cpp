#include <iostream>
#include <string>
using namespace std;

	// Very hard assignment, but fun to do! :)
	// By Baja1600

string word;
int j = 0, k = 0, i = 13, x, controller = 0;
unsigned char c;

	// This function returns the ascii value as integer. If controller is 1 its encrypt, if 2 its decrypt.
int Sym(int, int, int) {
	if (controller == 1) {
		return x+i;
	}
	else if (controller == 2) {
		return x-i;
	}
}

int main() {
	cout << "Encrypt(1) or Decrypt(2) ?" << endl;
	cin >> int(controller);
	cout << "Rot-7 or Rot-13?" << endl;
	cin >> int(i);
	cout << "Input string" << endl;
	cin >> word;
	cout << endl;

	// I kept missing the first character, but when I added + 1 to the while loop, it kind of fixed it.
	// For some reason I keep getting weird symbol in the front of every encryption/decryption.
	while ( k < (word.length() + 1)) {
		if (j == 5 && i == 7) { i = 13, j = 0; }
		if (j == 5 && i == 13) { i = 7; j = 0; }
		unsigned char(c) = Sym(i, x, controller);
		x = int(word[k]);
		cout << unsigned char(c);
		k++, j++;
	}
	cout << endl;
	system("Pause");
	return 0;
}