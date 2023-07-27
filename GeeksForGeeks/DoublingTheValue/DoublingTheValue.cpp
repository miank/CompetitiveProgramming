// DoublingTheValue.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
	long long solve(int n, long long a[], long long b)
	{
		//code here.
		for (int i = 0; i < n; i++)
		{
			if (a[i] == b)
			{
				b *= 2;
			}
		}
		return b;
	}
};

int main()
{
	long long arr[5] = { 1, 2, 3, 4, 8 };
	Solution obj;
	int b, n;
	cin >> b;
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	cout << obj.solve(arrSize, arr, b) << endl;
	return 0;
}

