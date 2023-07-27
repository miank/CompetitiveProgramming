// RichestCustomerWealth.cpp 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int maximumWealth(vector<vector<int>>& accounts) {
		int res = 0;
		for (int i = 0; i < accounts.size(); i++) {
			int temp = 0;
			for (int j = 0; j < accounts[i].size(); j++) {
				temp += accounts[i][j];
			}
			res = max(res, temp);
		}
		return res;
	}
};

int main()
{
	vector<vector<int>> v{ {1,2,3},{3,2,1} };
	Solution obj;
	cout << obj.maximumWealth(v) << endl;

	return 0;

}
