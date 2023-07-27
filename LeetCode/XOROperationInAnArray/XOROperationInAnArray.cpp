// XOROperationInAnArray.cpp 

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	int xorOperation(int n, int start) 
	{
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			int num = start + 2 * i;
			v.push_back(num);
		}
		int x = 0;
		for (int i = 0; i < n; i++)
		{
			x ^= v[i];
		}
		return x;
	}
};

int main()
{
	int n(0), start(0);
	cin >> n >> start;
	Solution Obj;
	int result = Obj.xorOperation(n, start);
	cout << result << endl;
	return 0;
}

