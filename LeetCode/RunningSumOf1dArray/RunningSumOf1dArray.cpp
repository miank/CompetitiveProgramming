// RunningSumOf1dArray.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	vector<int> runningSum(vector<int>& nums)
	{
		int sum = nums[0];
		vector<int> v;
		v.push_back(sum);
		for (int i = 1; i < nums.size(); i++)
		{
			sum += nums[i];
			v.push_back(sum);
		}
		return v;
	}
};

// Other Solution is 
vector<int> runningSum(vector<int>& nums)
{
	for (int i = 1; i < nums.size(); i++)
		nums[i] += nums[i - 1];
	return nums;
}

int main()
{
	Solution obj;
	vector<int> vInt;
	int n(0), ele(0);
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		vInt.push_back(ele);
	}

	vInt = obj.runningSum(vInt);
	
	for (int i = 0; i < vInt .size(); i++)
	{
		cout << vInt[i] << " ";
	}
	cout << endl;
	return 0;
}
