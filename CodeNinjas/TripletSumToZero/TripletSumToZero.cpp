// TripletSumToZero.cpp 


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


vector<vector<int>> findTriplets(vector<int>arr, int n) {
	// Write your code here
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++)
	{
		int j = i + 1;
		int k = n - 1;

		while (j < k) {
			int sum = arr[i] + arr[j] + arr[k];
			if (sum == 0) {
				return 1;
			}
			else if (sum < 0) {
				j++;
			}
			else {
				k--;
			}
		}
	}
}

int main()
{
    std::cout << "Hello World!\n";
}
