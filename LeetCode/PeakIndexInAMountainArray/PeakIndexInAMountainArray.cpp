// PeakIndexInAMountainArray.cpp 

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	int peakIndexInMountainArray(vector<int>& arr) {
		int l = 0;
		int h = arr.size();
		int pos = -1;
		while (l < h) {
			int mid = (l + h) / 2;

			if (arr[mid - 1] < arr[mid] > arr[mid + 1])
			{
				pos = mid;
				break;
			}
			else if (arr[mid] < arr[mid + 1])
			{
				h = mid - 1;
			}
			else
			{
				l = mid + 1;
			}
		}
		return pos;
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
	cout << obj.peakIndexInMountainArray(v) << endl;
	return 0;
}
