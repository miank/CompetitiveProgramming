// SearchInRotatedSortedArray.cpp 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int search(vector<int>& nums, int target) {
		int index = -1;
		if (nums.size() == 1) {
			if (nums[0] == target) {
				index = 0;
				return index;
			}
		}

		for (int i = 0; i < nums.size(); i++)
		{
			if (target == nums[i]) {
				index = i;
				break;
			}
		}

		return index;
	}
};

int main()
{
	Solution obj;
	int target(0), n(0), ele(0);
	cin >> target;
	vector<int> v;

	for (int i = 0; i < v.size(); i++)
	{
		cin >> ele;
		v.push_back(ele);
	}
	cout << obj.search(v, target) << endl;
	return 0;
}

