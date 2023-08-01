// if-else.cpp 

#include <iostream>
#include <string>
using namespace std;

string compareIfElse(int a, int b) {
	// Write your code here

	int val1 = int(a);
	int val2 = int(b);
	string result = "";

	if (val1 < val2) {
		result = "smaller";
	}
	else if (val1 > val2) {
		result = "greater";
	}
	else {
		result = "equal";
	}

	return result;
}


int main()
{
	int a, b;
	cin >> a >> b;
	cout << compareIfElse(a, b);
	return 0;
}
