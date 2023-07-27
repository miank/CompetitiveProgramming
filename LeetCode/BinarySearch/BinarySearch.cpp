// BinarySearch.cpp 

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int search(vector<int>& nums, int target) {

		int size = nums.size();
		int low = 0;
		int high = size - 1;

		while (low <= high)
		{
			int  mid = (low + high) / 2;

			if (nums[mid] == target)
			{
				return mid;
			}
			else if (nums[mid] < target)
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
		}
		return -1;
	}
};

int main()
{
	Solution obj;
	vector<int> v;

	int n(0), ele(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}

	int target(0);
	cin >> target;

	cout << obj.search(v, target) << endl;
	return 0;
}

