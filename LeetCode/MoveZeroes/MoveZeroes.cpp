// MoveZeroes.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& nums)
	{
		int size = nums.size();
		vector<int> v;
		int cnt(0);

		for (int i = 0; i < size; i++)
		{
			if (nums[i] != 0)
			{
				v.push_back(nums[i]);
			}
			else
			{
				cnt++;
			}
		}
		while (cnt--)
		{
			v.push_back(0);
		}
		return v;
	}
};

int main()
{
	Solution obj;
	vector<int> v{ 0, 1, 0, 3, 12 };

	v = obj.sortArrayByParity(v);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}

