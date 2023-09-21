// BinarySearch.cpp 

#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
	// Write Your Code Here
    int size = nums.size();
    int result = -1;

    int l = 0;
    int h = size - 1;

    if (target > nums[size - 1]) {
        return -1;
    }

    while (l <= h) {
        int mid = (l + h) / 2;

        if (nums[mid] == target) {
            result = mid;
            break;
        }
        else if (target > nums[mid]) {
            l = mid + 1;
        }
        else {
            h = mid - 1;
        }
    }

    return result;
}

int main()
{
	int n(0), ele(0), target(0);
	cin >> n;

	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}
	cin >> target;

	cout << search(v, target) << endl;
	return 0;
}
