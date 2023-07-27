#include "pch.h"

#include <map>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	vector<int> topKFrequent(vector<int>& nums, int k) {
		
		map<int, int> m1;
		vector<int> v;

		if (nums.size() == 1) {
			return nums;
		}

		for (int i = 0; i < nums.size(); i++)
		{
			m1[nums[i]]++;
		}

		for (auto i = m1.begin(); i != m1.end(); i++) {
			if (i->second >= k) {
				v.push_back(i->first);
			}
		}

		return v;
	}
};

int main()
{
	Solution obj;
	vector<int> v1, v2;

	int k(0), n(0), item(0);
	cin >> k >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> item;
		v1.push_back(item);
	}

	v2 = obj.topKFrequent(v1, k);

	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;
}
