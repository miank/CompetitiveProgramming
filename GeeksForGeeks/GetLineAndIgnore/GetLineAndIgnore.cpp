// GetLineAndIgnore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
// Function prototype
void getLineAndIgnore();
//Position this line where user code will be pasted.
// Driver Code
int main()
{
	// Number of testcase input
	int t;
	cin >> t;
	cin.ignore(); //Ignoring the newline so it isn't consumed by getline. Read about it!!
	while (t--) {
		getLineAndIgnore();
	}

	return 0;
}

void getLineAndIgnore() {

	string a, d;
	int b;

	// Your code here
	getline(cin, a);
	cin >> b;
	cin.ignore();
	getline(cin, d);
	cout << a << endl;
	cout << b << endl;
	cout << d << endl;
}
