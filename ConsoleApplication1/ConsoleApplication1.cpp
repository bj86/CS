// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a = 100;
	bool ok = !(1 <= a && a < 100);
	cout << ok << endl;
	system("pause");
}
