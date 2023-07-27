// SumOfUniqueElements.cpp 

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
	int sumOfUnique(vector<int>& nums) {
		unordered_map<int, int> m1;
		int total = 0;

		for (int i = 0; i < nums.size(); i++)
		{
			m1[nums[i]]++;
		}

		for (auto x : m1)
		{
			if (x.second == 1)
			{
				total += x.first;
			}
		}

		return total;
	}
};

int main()
{
	vector<int> v{ 1, 1, 1, 1, 1};
	Solution obj;
	cout << obj.sumOfUnique(v) << endl;
	return 0;
}

