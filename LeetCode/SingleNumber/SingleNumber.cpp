// SingleNumber.cpp 


#include "pch.h"
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int singleNumber(vector<int>& nums)
{
	if(nums.size() == 1)
            return nums[0];
        
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }

        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->second == 1)
            {
                return i->first;
            }
        }

	return 0;	
}

int main()
{
	int n(0), ele(0);
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}

	int num = singleNumber(v);
	cout << num << endl;
	return 0;
}

