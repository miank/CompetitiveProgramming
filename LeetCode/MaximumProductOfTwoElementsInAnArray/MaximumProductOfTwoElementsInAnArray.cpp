// MaximumProductOfTwoElementsInAnArray.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProduct(vector<int>& nums) {

	if (nums.size() >= 2)
	{
		sort(nums.begin(), nums.end());
	}

	int size = nums.size();
	int num1 = nums[size - 1];
	int num2 = nums[size - 2];
	
	int result = (num1 - 1) * (num2 - 1);
	return result;
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

	int result = maxProduct(v);
	cout << result << endl;
	return 0;
}

