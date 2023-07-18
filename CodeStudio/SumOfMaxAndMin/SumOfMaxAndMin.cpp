// SumOfMaxAndMin.cpp 

#include <iostream>
using namespace std;

int sumOfMaxMin(int arr[], int n) {
	// Write your code here.
	/*if (n < 2) {
		return arr[0] + arr[0];
	}

	int min = arr[0];
	int max = arr[n - 1];

	int i = 1;
	int j = n - 2;

	cout << min << " " << max << endl;
	while (i < j) {
		if (min < arr[i]) {
			min = arr[i];
		}
		if (max < arr[j]) {
			max = arr[j];
		}
		i++;
		j--;
	}

	return min + max;*/

	int maximum = INT_MIN;

	int minimum = INT_MAX;



	for (int i = 0; i < n; i++) {

		maximum = max(maximum, arr[i]);

		minimum = min(minimum, arr[i]);

	}

	int solu = maximum + minimum;

	return solu;
}

int main()
{
	int n(0);
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Sum of min and max is " << sumOfMaxMin(arr, n) << endl;
	return 0;
}

