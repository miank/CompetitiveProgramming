// IntersectionOfTwoArrays.cpp 

#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
	// Function to return the count of the number of elements in
	// the intersection of two arrays.
	int NumberofElementsInIntersection(int a[], int b[], int n, int m) 
	{
		// Your code goes here
		unordered_set<long long> s1;

		for (int i = 0; i < n; i++)
		{
			s1.insert(a[i]);
		}

		int count = 0;
		for (int i = 0; i < m; i++)
		{
			if ((s1.find(b[i]) != s1.end())) 
			{
				count++;
				s1.erase(b[i]);
			}
		}
		return count;
	}
};

int main()
{
	int n(0), m(0);
	cin >> n >> m;

	int *arr1 = new int[6]{ 1, 2, 3, 4, 5, 6 };
	/*for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}*/

	int *arr2 = new int[5]{ 3, 4, 5, 6, 7 };
	/*for (int i = 0; i < n; i++)
	{
		cin >> arr2[i];
	}*/

	Solution obj;
	cout << obj.NumberofElementsInIntersection(arr1, arr2, n, m);
	return 0;
}

