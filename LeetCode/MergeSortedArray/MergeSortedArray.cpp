// MergeSortedArray.cpp 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
	{
		for (int i = m, j = 0; j < n; i++)
			nums1[i] = nums2[j++];

		sort(nums1.begin(), nums1.end());
	}
};

int main()
{
	Solution obj;
	vector<int> v1{ 1, 2, 3, 0, 0, 0, };
	vector<int> v2{ 2, 5, 6 };
	int m = v1.size();
	int n = v2.size();

	v1 = obj.merge(v1, m, v2, n);

	for (int i = 0; i < m; i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	return 0;
}

