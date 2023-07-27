// ShuffleTheArray.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
	vector<int> shuffle(vector<int>& nums, int n)
	{
		vector<int> v;
		int j = n;
		for (int i = 0; i < n; i++)
		{
			if (j < nums.size())
			{
				v.push_back(nums[i]);
				v.push_back(nums[j]);
				j++;
			}
		}
		return v;
	}
};

// Other solution
vector<int> shuffle(vector<int>& nums, int n)
{
	vector<int>obj;
	for (int i = 0; i < n; i++)
	{
		obj.push_back(nums[i]);
		obj.push_back(nums[i + n]);
	}
	return obj;
}


int main()
{
	vector<int> v;
	int n(0), ele(0), m(0);
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}
	cin >> m;
	Solution obj;
	obj.shuffle(v, m);

	return 0;
}

