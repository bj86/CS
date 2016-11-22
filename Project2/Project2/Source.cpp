#include <iostream>
#include <iomanip>

using namespace std;

	// AsciiPrint.exe by Baja1600.

int main() {
	// Variables, one for each row. Stops when the for-loop reaches 255.
	int i, a=8, b=16, c=32, d=64, e=128;

	// for iterator that prints one single row
	for (a,b,c; (e <= 255 ); a++, b++, c++, d++, e++) {
		if (a < 32) {
	// do nothing till a == 32.
		}
		else {
			cout << setw(6);
			cout << setw(6) << int(a) << setw(2) << unsigned char(a) << setw(5) << int(b) <<
			setw(2) << unsigned char(b) << setw(5) << int(c) << setw(2) << unsigned char(c)
			<< setw(5) << int(d) << setw(2) << unsigned char(d) << setw(5) << int(e) << setw(2) << unsigned char(e);
			cout << setw(2) << endl;
		}
	}
	// cin is just there to make it not exit on finish. 
	cin >> i;
}