// ElementAppearingMoreThan25InSortedArray.cpp 

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
	int findSpecialInteger(vector<int>& arr) 
	{
		map<int, int> m1;
		int n = arr.size();
		for (int i = 0; i < arr.size(); i++)
		{
			m1[arr[i]]++;
			if (m1[arr[i]] > n / 4)
			{
				return arr[i];
			}
		}
	}
};

int main()
{
	Solution obj;
	int n;
	cin >> n;
	vector<int> v;
	int ele(0);

	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}

	int result = obj.findSpecialInteger(v);
	cout << result << endl;
}
