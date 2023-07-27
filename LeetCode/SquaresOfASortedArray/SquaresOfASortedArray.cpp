// SquaresOfASortedArray.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<int> sortedSquares(vector<int>& A) 
	{
		int size = A.size();

		for (int i = 0; i < size; i++)
		{
			int ele = A[i];
			int prod = abs(ele * ele);
			A[i] = prod;
		}
		sort(A.begin(), A.end());
		return A;
	}
};

int main()
{
	Solution obj;
	vector<int> v{ -7,-3,2,3,11 };
	v = obj.sortedSquares(v);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
    return 0;
}

