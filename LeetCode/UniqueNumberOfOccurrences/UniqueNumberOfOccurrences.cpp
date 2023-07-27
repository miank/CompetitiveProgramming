// UniqueNumberOfOccurrences.cpp 

#include "pch.h"
#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
	bool uniqueOccurrences(vector<int>& arr) 
	{
		map<int, int> m1;

		for (int i = 0; i < arr.size (); i++)
		{
			m1[arr[i]]++;
		}
		set<int> s;
		for (auto i = m1.begin(); i != m1.end(); i++)
		{
			if (s.count(i->second))
			{
				return false;
			}
			s.insert(i->second);
		}
		return true;
	}
};

int main()
{
	Solution obj;
	int n(0);
	cin >> n;
	int ele(0);
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}

	bool result = obj.uniqueOccurrences(v);
	cout << result << endl;
	return 0;
}

