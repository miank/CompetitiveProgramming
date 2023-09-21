// FirstAndLastPositionOfAnElementInSortedArray.cpp 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
	// Write your code here
	int l = 0;
	int h = n - 1;

	pair<int, int> p(-1, -1);
	bool flag1 = true, flag2 = true;

	while (l < h) {
		if (arr[l] == k && flag1 == true)
		{
			p.first = l;
			l++;
		}

		if (arr[h] == k && flag2 == true)
		{
			p.second = h;
			h++;
		}
	}

	return p;
}

int main()
{
	int n(0), k(0), ele(0);
	cin >> n >> k;
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}
	pair<int, int> p;
	p = firstAndLastPosition(v, n, k);
	cout << p.first << " " << p.second << endl;

	return 0;
}
