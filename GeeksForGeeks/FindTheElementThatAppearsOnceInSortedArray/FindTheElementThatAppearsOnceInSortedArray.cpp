// FindTheElementThatAppearsOnceInSortedArray.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
	int findOnce(int arr[], int n)
	{
		//code here.
		int eleOnce = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i - 1] != arr[i] && arr[i] != arr[i + 1])
			{
				eleOnce = arr[i];
			}
		}
		return eleOnce;
	}
};

int main()
{
	int arr[] = { 1, 1, 2, 2, 3, 3, 4, 50, 50, 65, 65 };
	int n = sizeof(arr) / sizeof(arr[0]);
	Solution obj;
	cout << obj.findOnce(arr, n) << endl;
	return 0;
}