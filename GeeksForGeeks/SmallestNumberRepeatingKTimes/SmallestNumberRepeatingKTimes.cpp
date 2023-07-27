// SmallestNumberRepeatingKTimes.cpp

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
	int findDuplicate(int arr[], int N, int K)
	{
		map<int, int> m1;
		for (int i = 0; i < N; i++)
		{
			m1[arr[i]]++;
		}

		int duplicateEle = 0;
		for (auto x : m1)
		{
			if (x.second == K)
			{
				duplicateEle = x.first;
				break;
			}
		}

		return duplicateEle;
	}
};

int main()
{
	int n(0), k(0);
	int *arr = new int[4]{ 3, 5, 3, 2 };
	cin >> n >> k;

	Solution obj;
	cout << obj.findDuplicate(arr, n, k);
	return 0;
}

