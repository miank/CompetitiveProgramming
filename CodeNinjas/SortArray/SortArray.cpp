// SortArray.cpp 

#include <iostream>
#include <vector>
using namespace std;

void sortArray(vector<int>& arr, int n)
{
    // Write your code here.
	int l = 0, h = n - 1;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[l] == arr[h]) {
			h--;
		}
		else if (arr[l] > arr[h]) {
			swap(arr[l], arr[h]);
			l++;
		}
		else {
			l++;
			h--;
		}
	}
}

int main()
{
    int n(0), ele(0);
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		v.push_back(ele);
	}

	sortArray(v, n);
	return 0;
}
