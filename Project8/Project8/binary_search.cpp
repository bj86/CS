#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	vector<int> myList{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	int x;
	char hang;

	cout << "Welcome to Binary Search" << endl;
	cout << "Pick a number between 1 and 16" << endl;
	cin >> x;
	cin.get();
	cout << endl;

	// Reduce list to half its size. Use i-- or i++ till i == x.
	for (int i = myList.size() / 2; i >= x || i <= x; ) {
		if (x < i) {
			cout << i << endl;
			i--;
		}
		if (x > i) {
			cout << i << endl;
			i++;
		}
		if (x == i) {
			cout << i << endl;
			break;
		}
	}
	cin >> hang;
}