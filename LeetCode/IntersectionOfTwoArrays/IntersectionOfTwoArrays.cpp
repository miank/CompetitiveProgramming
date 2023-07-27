// IntersectionOfTwoArrays.cpp 

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		map<int, int> m1;

		for (int i = 0; i < nums1.size(); i++) {
			m1[nums1[i]]++;
		}

		vector<int> v;

		for (int i = 0; i < nums2.size(); i++) {

			if (m1[nums2[i]] != 0) 
			{
				m1[nums2[i]]--;
				v.push_back(nums2[i]);
			}
		}

		return v;
	}
};

int main()
{
	vector<int> v1, v2, v;
	int n(0),m(0), ele(0);

	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v1.push_back(ele);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> ele;
		v2.push_back(ele);
	}

	Solution obj;
	v = obj.intersect(v1, v2);

}

