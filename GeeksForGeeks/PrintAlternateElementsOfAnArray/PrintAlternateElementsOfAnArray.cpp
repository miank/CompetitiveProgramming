// PrintAlternateElementsOfAnArray.cpp 

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0);
	cin >> t;
	int n(0);
	while (t--)
	{
		cin >> n;
		int *arr = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << endl;
			i++;
		}
	}
}
