#include <iostream>
#include <iomanip>

using namespace std;

// AsciiPrint.exe by Baja1600.

int main() {
	// Variables, one for each row. Stops when the for-loop reaches 255.
	int i, a=32, b=64, c=128;

	// for iterator that prints one single row
	for (a,b,c; (c <= 255 ); a++, b++, c++) {
		cout << setw(2);
		cout << setw(2) << int(a) << setw(2) << unsigned char(a) << setw(5) << int(b) << 
		setw(2) << unsigned char(b) << setw(5) << int(c) << setw(2) << unsigned char(c);
		cout << setw(2) << endl;
	}
	// cin is just there to make it not exit on finish. 
	cin >> i;
}