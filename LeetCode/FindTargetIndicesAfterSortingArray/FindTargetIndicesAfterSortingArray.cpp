// FindTargetIndicesAfterSortingArray.cpp 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<int> targetIndices(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		vector<int> v;
		for (int i = 0; i < nums.size(); i++)
		{
			if (target == nums[i])
			{
				v.push_back(i);
			}
		}
		return v;
	}
};

int main()
{
	vector<int> v{ 1,2,5,2,3 };
	vector<int> v1;
	int target;
	cin >> target;

	Solution obj;
	v1 = obj.targetIndices(v, target);

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	return 0;
}
