// SearchingAnElementInASortedArray.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	// Function to find element in sorted array
	// arr: input array
	// N: size of array
	// K: element to be searche
	int searchInSorted(int arr[], int N, int K)
	{
		// Your code here
		int result = -1;
		for (int i = 0; i < N; i++)
		{
			if (arr[i] == K)
			{
				result = 1;
				break;
			}
		}
		return result;
	}
};

int main()
{
	int arr[5] = { 1, 2, 3, 4, 6 };
	Solution obj;
	int k;
	cin >> k;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << obj.searchInSorted(arr, n, k) << endl;
	return 0;
}
