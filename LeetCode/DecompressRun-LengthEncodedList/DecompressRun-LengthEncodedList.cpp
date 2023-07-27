// DecompressRun-LengthEncodedList.cpp  

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	vector<int> decompressRLElist(vector<int>& nums) 
	{
		int size = nums.size();
		vector<int> v;
		for (int i = 0; i < size; i++)
		{
			int freq = nums[i];
			int val = nums[i + 1];

			while (freq--)
			{
				v.push_back(val);
			}
			i++;
		}
		return v;
	}
};

int main()
{
	Solution obj;
	int n(0), ele(0);
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}

	v = obj.decompressRLElist(v);
	for (int i = 0; i < v.size (); i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}

