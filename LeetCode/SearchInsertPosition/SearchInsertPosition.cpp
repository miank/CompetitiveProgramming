// SearchInsertPosition.cpp 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int low = 0, high = nums.size() - 1;
		int mid;
		while (low <= high) {
			mid = (low + high) / 2;
			if (target == nums[mid]) {
				return mid;
			}
			else if (target < nums[mid]) {
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
		return low;
	}
};

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

	int target(0);
	cin >> target;

	Solution obj;
	cout << obj.searchInsert(v, target) << endl;
	return 0;
}

