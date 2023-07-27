// AtLeastTwoGreaterElements.cpp 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<int> findElements(int a[], int n)
	{
		// Your code goes here   
		sort(a, a + n);
		vector<int> v;

		for (int i = 0; i < n - 2; i++)
		{
			v.push_back(a[i]);
		}
		return v;
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

	vector<int> v;
	Solution obj;

	v = obj.findElements(arr, n);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	cout << endl;
	return 0;
}
