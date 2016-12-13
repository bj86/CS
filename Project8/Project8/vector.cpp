#include <iostream>
#include <random>
#include <ctime>
#include <vector>
#include <algorithm>

// Baja1600

using namespace std;

vector<int> numbers;
char hang;

int main() {

	default_random_engine gen;
	uniform_int<int> random(1, 100);

	// Adding randomized numbers(1, 600) to the array.
	for (int i = 0; i < 600; i++) {
		numbers.push_back(random(gen));
	}
	
	cout << "Lets copy the contents of Numbers to a new array" << endl;
	cout << endl;

	vector<int> numbers2;
	// Copy
	numbers2 = numbers;

	// Testing to see if numbers2 now contains the same values as numbers.
	cout << "Size of vector " << size(numbers2) << endl;
	cout << "Numbers2[0] " << numbers2[0] << endl;
	cout << "Numbers2[599] " << numbers2[599] << endl;

	cout << "Press any key to continue" << endl;
	cin >> hang;
	cout << endl;
	cout << "Lets calculate the average of all values in the array" << endl;

	int sum = 0;

	for (int i = 0; i < 600; i++) {
		sum += numbers[i];
	}

	cout << "Sum of array is: " << sum << endl;
	cout << "Average is: " << sum / size(numbers) << endl;
	cout << endl;
	// Sorting list, lowest to highest.
	sort(numbers.begin(), numbers.end());

	// Printing lowest and highest value.
	cout << "Lowest number: " << numbers[0] << endl;
	cout << "Highest number: " << numbers[599] << endl;
	cout << endl;
	cin >> hang;

	cout << "Lets see how many similiar values we can find" << endl;
	cout << "Please input a number ranging from 1 to 100." << endl;
	int x;
	cin >> x;

	int counter = count(numbers.begin(), numbers.end(), x);

	cout << "Found " << x << ", " << counter << " times." << endl;
	cout << endl;
	cin >> hang;

	cout << "We want to know what number has the most occurances!" << endl;

	int num = 101, most = 0, i = 1;
	int count1 = count(numbers.begin(), numbers.end(), i);
	int count2 = count(numbers.begin(), numbers.end(), i+1);

	while (i < 101) {
		if (count1 > count2) {
			most = count1;
			num--;
		}
		i++;
	}

	cout << "Found: " << most << " of " << num << endl;
	cout << num << " has the most occurances.";

	cout << endl;
	cin >> hang;

	cout << "Finally, lets print everything!" << endl;

	// Prints every number from 1 - 100 for the amount that count() finds, then linebreaks.
	for (i = 1; i < 101; i++) {
		count1 = count(numbers.begin(), numbers.end(), i);
		for (int w = 0; w < count1; w++) {
			cout << i << " ";
		}
		cout << endl;
}

	cin >> hang;
}