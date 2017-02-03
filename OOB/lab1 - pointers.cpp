#include <iostream>
#include <random>

using namespace std;

// baja1600

int main() {
	int input;
	char hang;
	cout << "Amount of elements to add?" << endl;
	cin >> input;

	// Is this the right way?
	int *myArray = new int[input];

	// Or is this the right way?
	int *ptr = &myArray[0];

	default_random_engine engine;
	uniform_int_distribution<int> num(-5000, 5000);

	// Adding randomized numbers to array (-5000, 5000)
	for (int i = 0; i < input; i++) {
		int randInt = num(engine);
		*(myArray + i) = num(engine);
	}
	int k = 0;
	for (int i = 0; i < input; i++) {
		if (k < 200) {
			cout << *ptr + i << endl;
			k++;
		}
		else {
			cout << "Type anything to print another 200" << endl;
			cin >> hang;
			k = 0;
		}
	}

	// Sum of array
	cout << "Finding sum of array" << endl;
	int sum = 0;
	for (int *ia = myArray, i = 0; i < input; ia++, i++) {
		sum += *ia;
	}
	cout << sum << endl;

	// Highest value in array
	cout << "Finding highest value in array" << endl;
	int *max = myArray;
	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input - 1; j++) {
			if (*(myArray + j) > *max) {
				*max = *(myArray + j);
			}
			if (*(myArray + j + 1) > *max) {
				*max = *(myArray + j + 1);
			}
		}
	}
	cout << max << " " << *max << endl;

	// Lowest value in array
	cout << "Finding lowest value in array" << endl;
	int *min = myArray;
	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input - 1; j++) {
			if (*(myArray + j) < *min) {
				*min = *(myArray + j);
			}
			if (*(myArray + j + 1) < *min) {
				*min = *(myArray + j + 1);
			}
		}
	}
	cout << min << " " << *min << endl;

	system("Pause");
}