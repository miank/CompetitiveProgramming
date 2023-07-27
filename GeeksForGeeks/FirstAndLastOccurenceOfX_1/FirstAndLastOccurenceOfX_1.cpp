// FirstAndLastOccurenceOfX_1.cpp 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> find(int arr[], int n, int x)
{
	// code here
	vector<int> v;
	int i = 0, j = n - 1;
	
	while (i < j)
	{
		if (arr[i] != x) {
			i++;
		}
		if (arr[j] != x) {
			j--;
		}
		if (arr[i] == x && arr[j] == x) {
			v.push_back(i);
			v.push_back(j);
			break;
		}
	}
	if (i > j) {
		v.push_back(-1);
		v.push_back(-1);
	}
	return v;
}

int main()
{
	int n(0), x(0);
	int arr[]{ 1, 1, 1, 2, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 6, 7, 7, 7, 8, 8, 8, 8,
			   9, 9, 9, 9, 9, 10, 10, 10 };
	vector<int> v;
	cin >> n >> x;

	v = find(arr, n, x);
	
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	return 0;
}

