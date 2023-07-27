// MergeTwoSortedArrays.cpp

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int> &A, vector<int> B) {
	// add your logic here
	int m = A.size() - 1;
	int n = A.size() - 1;
	vector<int> v;
	int size = m < n ? n : m;
	int j = 0, i = 0;
	for (i = 0; i < size; i++)
	{
		if (A[i] < B[j]) {
			v.push_back(A[i]);
		}
	}
}
int main()
{
	int t(0);
	cin >> t;
	vector<int> v1, v2, result;

	while (t--)
	{
		int n(0), ele(0);
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v1.push_back(ele);
		}
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v2.push_back(ele);
		}

		result = mergeSortedArrays(v1, v2);
		for (int i = 0; i < n; i++)
		{
			cout << result[i] << " ";
		}
		cout << endl;
	}
	return 0;
}