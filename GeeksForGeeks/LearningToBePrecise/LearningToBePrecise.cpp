// LearningToBePrecise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iomanip>
#include <iostream>
using namespace std;
//Position this line where user code will be pasted.
void precise(float, float);//prototype
//Driver Code
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		float a, b;
		cin >> a >> b; //Taking input of a and b in floating types
		precise(a, b);

	}
	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
void precise(float a, float b)
{
	//perform a/b
	float c = a / b;
	cout<< a/b <<" "<< std::setprecision(3) <<std::fixed << a / b <<endl;

	cout << endl;
}
