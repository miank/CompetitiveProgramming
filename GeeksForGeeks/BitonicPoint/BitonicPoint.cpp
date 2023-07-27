// BitonicPoint.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:

	int findMaximum(int arr[], int n) {
		// code here
		int max = 0;
		for (int i = 1; i < n; i++)
		{
			if (i == n - 1)
			{
				max = arr[i];
				break;
			}

			if ((arr[i - 1] < arr[i]) && (arr[i] > arr[i + 1]))
			{
				max = arr[i];
				break;
			}
			else
			{
				continue;
			}
		}
		return max;
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

	Solution obj;
	cout << obj.findMaximum(arr, n) << endl;
	return 0;
}

