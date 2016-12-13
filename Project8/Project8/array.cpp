#include <iostream>
#include <random>
#include <iomanip>

using namespace std;

int main() {
	cout << fixed;
	cout << setprecision(2);

	int x[600], y[600], sorted[600], temp[120], test[11];
	int input, counter = 0, sum = 0, result = 0;
	char hang;

	random_device rd;
	mt19937 mt(rd());
	uniform_real_distribution<> dis(1, 101);
	cout << "Input a number and the program will find how many times" << endl;
	cout << "the number is present in array(x) with 600 random numbers in range 1 to 100.";
	cout << endl << endl;
	cout << "Number (1 - 100): " << endl;
	cin >> input;

	// Fill array x[] with random integers (1, 101).
	for (int i = 0; i < 600; ++i) {
		x[i] = int(dis(mt));
		y[i] = x[i];
		sum += x[i];
	}
	double avg = sum / 600;
	cout << "Avg. " << avg << endl;

	// Counting occurance of user-selected number in array y.
	// Also checks if our copy was successful. 
	for (int j = 0; j < 600; j++) {
		if (y[j] == int(input)) {
			counter++;
		}
	}
	cout << "Found " << input << " | " << counter++ << " " << "times" << endl;

	// Storing result to re-use counter.
	result = int(counter);

	int i = 0, j = 0;
	counter = 0;

	// Check elements in x for numbers 1 to 100. Counts and saves to temp[].
	while (j < 101) {
		if (j == x[i]) {
			counter++;
			temp[0 + j] = counter;
		} if (i == 600) {
			j++;
			i = 0, counter = 0;
		} else {
			i++;
		}
	}

	// Check temp[input] for same value as user-selected for-loop on line 34.
	cout << endl;
	cout << "Lets see if temp contains the same value" << endl;
	cout << "temp[input]: " << temp[input] << endl;

	// Sorts and prints based on amount found in temp[num]. 
	// If temp[1] = 5, then it stores 1 five times to stored[i].
	i = 0, counter = 0;
	int num = 1;

	while (i < 600) {
		if (counter < temp[num]) {
			sorted[i] = num;
			counter++;
			cout << sorted[i] << " ";
		}
		if (temp[num] == counter) {
			cout << endl;
			num++;
			counter = 0;
		}
		i++;
	}
	cout << endl;

	// Bubble-sort. I had done my own sort and print when I noticed the specification.
	// Using a smaller array because my PC kept crashing when I made critical errors. :]

	// Adding 10 random numbers to test-array.
	cout << "Bubble Sort" << endl;
	for (int i = 0; i < 11; i++) {
		test[i] = int(dis(mt));
	}
	// Nested for-loop.
	int hold = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (test[j] > test[i + 1]) {
				hold = test[j];
				test[j] = test[i + 1];
				test[i + 1] = hold;
			}
		}
	}
	// Prints Bubble-sorted test array.
	for (int j = 1; j < 11; j++) {
		cout << test[j] << endl;
	}

	cin >> hang;

}
