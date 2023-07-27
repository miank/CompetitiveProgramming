// MajorityElementII.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution 
{
public:
	vector<int> majorityElement(vector<int>& nums) 
	{
		map<int, int> m1;
		for (int i = 0; i < nums.size(); i++)
		{
			m1[nums[i]]++;
		}
		int n = nums.size() / 3;
		vector<int> v;
		for (auto x : m1)
		{
			if (x.second > n)
			{
				v.push_back(x.first);
			}
		}
		return v;
	}
};

int main()
{
	Solution obj;
	vector<int> v;
	int n(0), ele(0);
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}
	v = obj.majorityElement(v);
	for (int i = 0; i < v.size (); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	return 0;
}
