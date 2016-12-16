#include <iostream>
#include <iomanip>
using namespace std;

int a, b, c, i;

int main() {
	// Triple nested for-loop.
	for (a = 1; a <= 500; a++) {
		for (b = a; b <= 500; b++) {
			for (c = 1; c <= 500; c++) {
				// Counts every pythagorean triangle found.
				if (c*c == a*a + b*b) {
					i++;
					// Prints every time C is 100, 200, 300, 400 or 500.
					if (c == 100 || c == 200 || c == 300 || c == 400 || c == 500) {
						cout << "a: " << a << " b: " << b << " c: " << c << endl;
					}
				}
			}
		}
	}
	// Prints amouint of pythagorean trinagles found.
	cout << setw(3) << "Pythagorean tripes found: " << setw(3) << i << endl;
	cin >> i;
}