// LogicalOperators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
void logicOp(int a, int b);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		logicOp(a, b);

	}
	return 0;
}

void logicOp(int a, int b)
{
	/*output (a&&b), (a||b), and ((!a)&&(!b))separated by spaces*/
	cout << (a&&b) << " " << (a || b) << " " << ((!a) && (!b)) << endl;
}