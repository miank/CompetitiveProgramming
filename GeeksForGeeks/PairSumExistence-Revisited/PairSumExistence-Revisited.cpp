// PairSumExistence-Revisited.cpp 

#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int sumExists(int arr[], int n, int sum)
{
	// your code here
	map<int, int> m1;
	for (int i = 0; i < 10; i++)
	{
		if (m1.find(sum - i) != m1.end())
		{
			return 1;
		}
		m1[arr[i]]++;
	}
	return 0;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sum = 24;

	cout << sumExists(arr, 10, sum) << endl;
	return 0;
}

