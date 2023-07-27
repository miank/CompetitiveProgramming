// UnionOfTwoSortedArrays.cpp 

#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
	//arr1,arr2 : the arrays
	// n, m: size of arrays
	//Function to return a list containing the union of the two arrays. 
	vector<int> findUnion(int arr1[], int arr2[], int n, int m)
	{
		//Your code here
		//return vector with correct order of elements
		vector<int> v;
		set<int> s;

		for (int i = 0; i < n; i++) {
			s.insert(arr1[i]);
		}

		for (int i = 0; i < m; i++) {
			s.insert(arr2[i]);
		}
		for (auto value : s) {
			v.push_back(value);
		}
		return v;
	}
};

int main()
{
	int n(0), m(0);
	cin >> n >> m;
	vector<int> v;

	int *arr1 = new int[n];
	int *arr2 = new int[m];
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> arr2[i];
	}

	Solution obj;
	v = obj.findUnion(arr1, arr2, n, m);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	return 0;
}

