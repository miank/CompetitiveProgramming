// FindTheDuplicateNumber.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
	int findDuplicate(vector<int> & nums)
	{
		map<int, int> m1;
		int num(0);
		for (int i = 0; i < nums.size(); i++)
		{
			m1[nums[i]]++;
		}
		for (auto i : m1)
		{
			if (i.second > 1)
			{
				num = i.first;
				break;
			}
		}
		return num;
	}
};

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		int n(0), ele(0);
		vector<int> v;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v.push_back(ele);
		}
		Solution obj;
		cout << obj.findDuplicate(v) << endl;
	}
	return 0;
}
