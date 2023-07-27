// NumberOfGoodPairs.cpp 

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
	int numIdenticalPairs(vector<int>& nums) {
		int n = nums.size();
		int count = 0;
		map<int, int> m1;
		for (int i = 0; i < n; i++)
		{
			count += m1[nums[i]]++;
		}
		return count;
	}
};