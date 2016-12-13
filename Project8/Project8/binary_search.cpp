#include <iostream>

// Inspiration and help found here: https://www.youtube.com/watch?v=OAZc1zwjERU
// Baja1600

using namespace std;
char hang;



int main() {

	int myList[10]{ 11, 13, 15, 18, 21, 29, 43, 69, 88, 100 };

	int start = 0;
	int end = 10 - 1;

	// x is the number we are looking for in the array. 
	int x = 29;

	while (start <= end) {
		int mid = (start + end) / 2;
		if (x < myList[mid]) {
			end = mid - 1;
		}
		else if (x == myList[mid]) {
			cout << "Number " << x << " found at index " << mid;
			break;
		}
		else {
			start = mid + 1;
		}
	}

	cin >> hang;
}

