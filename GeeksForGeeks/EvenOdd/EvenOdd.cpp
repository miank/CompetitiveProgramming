// EvenOdd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
// Function prototype
void evenOdd(int, int);
//Position this line where user code will be pasted.
// Driver code to test above function
int main() {

	int t;
	cin >> t;

	while (t--) {
		int a, b;

		cin >> a >> b;

		evenOdd(a, b);

	}

	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
// Function to check if number is even or odd
void evenOdd(int a, int b) {

	// Your code here
	if (a % 2 != 0)
	{
		cout << b << endl;
		cout << a << endl;
	}
	else
	{
		cout << a << endl;
		cout << b << endl;
	}
}