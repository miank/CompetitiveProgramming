// LeadersInArray.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t(0), n(0), ele(0), flag(1);
	cin >> t;

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
			int ele = arr[i];
			int j(0);
			for (j = i + 1; j < n; j++)
			{
				if (ele <= arr[j])
				{
					flag = 0;
					break;					
				}
			}
			if (j == n)
			{
				cout << ele << " ";
			} 
		}
	}
	return 0;
}

