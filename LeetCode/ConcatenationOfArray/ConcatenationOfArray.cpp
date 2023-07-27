// ConcatenationOfArray.cpp 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> getConcatenation(vector<int>& nums) {
		int ele = 0;
		int n = nums.size();
		for (int i = 0; i < n; i++)
		{
			ele = nums[i];
			nums.push_back(ele);
		}

		return nums;
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

	Solution obj;
	obj.getConcatenation(v);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	return 0;

}
