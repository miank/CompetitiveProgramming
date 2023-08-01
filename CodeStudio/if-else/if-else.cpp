// if-else.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string compareIfElse(int a, int b) {
	// Write your code here

	int val1 = int(a);
	int val2 = int(b);

	if (val1 < val2) {
		return "smaller";
	}
	else if (val1 > val2) {
		return "greater";
	}
	else {
		return "equal";
	}
}


int main()
{
	cout << compareIfElse('a', 'b');
	return 0;
}
