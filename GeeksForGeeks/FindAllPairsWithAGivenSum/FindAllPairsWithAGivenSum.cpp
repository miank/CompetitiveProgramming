// FindAllPairsWithAGivenSum.cpp 

#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
	{
		// Your code goes here  
		unordered_set<int> s;

		for (int i = 0; i < M; i++)
		{
			s.insert(B[i]);
		}


		vector<pair<int, int>> res;

		for (int i = 0; i < N; i++)
		{
			if (s.find(X - A[i]) != s.end())
			{
				res.push_back({ A[i], X - A[i] });
			}
		}

		sort(res.begin(), res.end());

		return res;

	}
};

int main()
{
	int *arr1 = new int[5]{ 1, 2, 4, 5, 7 };
	int *arr2 = new int[5]{ 5, 6, 3, 4, 8 };
	int x = 0;
	cin >> x;

	vector<pair<int, int>> p1;

	Solution obj;
	obj.allPairs(arr1, arr2, 5, 5, x);
	   
	return 0;
}
