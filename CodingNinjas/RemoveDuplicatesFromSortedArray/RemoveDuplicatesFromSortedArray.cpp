// RemoveDuplicatesFromSortedArray.cpp 

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& arr, int n) {
	// Write your code here.
	int cnt = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] != arr[i + 1]) {
			cnt++;
		}
	}
	return cnt;
}


int main()
{
	int n(0), ele(0);
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}

	cout << removeDuplicates(v, n) << endl;
	return 0;
}

