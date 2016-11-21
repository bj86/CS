#include <iostream>
#include <iomanip>
using namespace std;

int a, b, c, i;

int main() {
	for (a = 1; a <= 500; a++) {
		for (b = a; b <= 500; b++) {
			for (c = 1; c <= 500; c++) {
				if (c*c == a*a + b*b) {
					i++;
					if (c == 100 || c == 200 || c == 300 || c == 400 || c == 500) {
						cout << "a: " << a << " b: " << b << " c: " << c << endl;
					}
				}
			}
		}
	}
	cout << setw(3) << "Pythogorean tripes found: " << setw(3) << i << endl;
	cin >> i;
}