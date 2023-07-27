// RotateArray.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:

	//Function to rotate an array by d elements in counter-clockwise direction. 
	void rotateArr(int arr[], int d, int n) {
		// code here
		int temp = arr[0], i;
		for (i = 0; i < n - 1; i++)
			arr[i] = arr[i + 1];

		arr[n - 1] = temp;
	}
};

int main()
{
	int n(0), d(0);
	cin >> n >> d;

	int *arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	Solution obj;
	for (int i = 0; i < d; i++)
	{
		obj.rotateArr(arr, d, n);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
