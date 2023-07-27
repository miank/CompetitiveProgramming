// N-RepeatedElementInSize2NArray.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
	int repeatedNTimes(vector<int>& A) 
	{
		map<int, int> m1;
		for (int i = 0; i < A.size (); i++)
		{
			m1[A[i]]++;
		}

		int max = 0;
		int result = 0;
		for (auto i : m1)
		{
			if (i.second > max)
			{
				max = i.second;
				result = i.first;
			}
		}

		return result;
	}
};


int main()
{
	int n(0);
	cin >> n;

	vector<int> vInt;
	int ele;

	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		vInt.push_back(ele);
	}

	Solution obj;
	cout << obj.repeatedNTimes(vInt) << endl;


	return 0;
}
