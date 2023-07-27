// ProductPair.cpp 

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
	bool isProduct(int arr[], int n, long long x) {
		// code here
		if (n < 2)
			return false;

		unordered_set<int> s;
		for (int i = 0; i < n; i++) {

			if (arr[i] == 0) {
				if (x == 0)
					return true;
				else
					continue;
			}

			if (x % arr[i] == 0) {
				if (s.find(x / arr[i]) != s.end()) return true;

				s.insert(arr[i]);
			}
		}
		return false;
	}
};

int main()
{
	int n(0);
	cin >> n;

	long long x = 0;
	cin >> x;

	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	Solution obj;
	cout << obj.isProduct(arr, n, x) << endl;
	return 0;
}

