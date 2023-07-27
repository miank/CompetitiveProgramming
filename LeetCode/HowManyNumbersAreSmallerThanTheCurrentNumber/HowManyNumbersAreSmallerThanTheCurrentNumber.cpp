// HowManyNumbersAreSmallerThanTheCurrentNumber.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums)
{
	int cnt = 0;
	vector<int> v1;
	for (int i = 0; i < nums.size(); i++)
	{
		int num = nums[i];
		for (int j = 0; j < nums.size(); j++)
		{
			if (num > nums[j])
			{
				cnt++;
			}
		}
		v1.push_back(cnt);
		cnt = 0;
	}
	return v1;
}

int main()
{
	int n(0), ele(0);
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}

	smallerNumbersThanCurrent(v);
}
