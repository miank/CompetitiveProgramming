// SortArrayByParity.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A) 
	{
		int start = 0;
        int end = A.size() - 1;
        while (start < end) {
            if (A[start] % 2 == 0) {
                start++;
            } else {
                if (A[end] % 2 == 0) {
                    int temp = A[end];
                    A[end] = A[start];
                    A[start] = temp;
                }
                end--;
            }
        }
        return A;
	}
};

int main()
{
	Solution obj;
	vector<int> v{ 3, 1, 2, 4 };

	v = obj.sortArrayByParity(v);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}

