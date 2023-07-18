#include "pch.h"
#include <iostream>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		No need to print anything.
		Taking input and printing output is handled automatically.
	*/

	int currSum = 0, maxSum = INT_MIN;

	for (int i = 0; i < n; i++) {

		currSum += arr[i];

		maxSum = max(maxSum, currSum);

		if (currSum < 0)

			currSum = 0;

	}

	return maxSum;
}


int main()
{
	int n(0), ele(0);
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> ele;
		arr[i] = ele;
	}

	cout << maxSubarraySum(arr, n);
}
