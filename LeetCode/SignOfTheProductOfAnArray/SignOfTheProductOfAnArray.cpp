// SignOfTheProductOfAnArray.cpp 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	int arraySign(vector<int>& nums) {
		int n = nums.size();
		int prod = 1;
		for (int i = 0; i < n; i++)
		{
			if (nums[i] == 0) 
				return 0;
			else if (nums[i] < 0) 
				prod *= -1;
			else 
				continue;
		}
		return prod;
	}
};
int main()
{
	vector<int> v;
	int n(0), ele(0);

	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}
	Solution obj;
	cout << obj.arraySign(v) << endl;
	return 0;
}
