// FindAllNumbersDisappearedInAnArray.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution 
{
public:
	vector<int> findDisappearedNumbers(vector<int>& nums) 
	{
		map<int, int> m1;
		for (int i = 0; i < nums .size(); i++)
		{
			m1[nums[i]]++;
		}
		vector<int> v;
		for (int i = 1; i <= m1.size (); i++)
		{
			int x = m1.count(i);
			if (x == 0)
			{
				v.push_back(i);
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

	v = obj.findDisappearedNumbers(v);
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	return 0;
}

