// MajorityElement.cpp 
#include <iostream>
#include <vector>
#include <unordered_map>
#include <math.h>
using namespace std;

int findMajorityElement(int arr[], int n) {
	// Write your code here.

	unordered_map<int, int> m1;
	int result = -1;

	for (int i = 0; i < n; i++) {
		m1[arr[i]]++;
	}

	for (auto x : m1) {
		if (x.second > (int)n / 2) {
			result = x.first;
			break;
		}
	}

	return result;
}

int main()
{
	int n(0), ele(0);
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << findMajorityElement(arr, n) << endl;
	return 0;
}
