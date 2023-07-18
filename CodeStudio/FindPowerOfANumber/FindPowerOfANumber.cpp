// FindPowerOfANumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

long long Pow(int X, int N)
{
	// Write your code here. 
	long long result = 1;
	while (N > 0)
	{
		result *= X;
		N--;
	}
	return result;
}

int main() {
	int n(0), x(0);
	cin >> n >> x;

	cout << pow(x, n) << endl;
	return 0;
}