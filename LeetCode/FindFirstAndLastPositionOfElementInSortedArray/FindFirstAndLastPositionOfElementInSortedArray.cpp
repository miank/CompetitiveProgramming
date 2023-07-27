// FindFirstAndLastPositionOfElementInSortedArray.cpp 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		if (nums.size() == 0)
		{
			nums.push_back(-1);
			nums.push_back(-1);
			return nums;
		}
		int l = 0;
		int h = nums.size() - 1;

		while (l < h)
		{

		}

		return nums;
	}
};

int main()
{
	vector<int> v{ 5, 7, 7, 8, 8, 10 };
	int target;
	cin >> target;
	Solution obj;
	v = obj.searchRange(v, target);

	return 0;
}

