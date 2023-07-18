// FindMinimumInRotatedSortedArray.cpp 

#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& arr)
{
	// Write your code here.
	int min = arr[0];
	for (int i = 0; i < arr.size(); i++)
	{
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	return min;

}

int main()
{
	vector<int> v;
	int n(0), ele(0);
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}

	cout << findMin(v) << endl;
	return 0;
}

