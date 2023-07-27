// NeedSomeChange.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	void swapElements(int arr[], int sizeof_array) {

		// Your code here
		for (int i = 0; i < sizeof_array - 2; i++)
		{
			swap(arr[i], arr[i + 2]);
		}
	}
};

int main()
{
	int n(0);
	cin >> n;

	int *arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int sizeArr = sizeof(arr) / sizeof(arr[0]);
	Solution obj;
	obj.swapElements(arr, sizeArr);
	return 0;
}

