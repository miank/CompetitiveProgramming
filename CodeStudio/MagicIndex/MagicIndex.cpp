// MagicIndex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int magicIndex(vector<int> a, int n) {
	// Write your code here

	int result = -1;

	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == i) {
			result = i;
			break;
		}
	}

	return result;
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

	cout << magicIndex(v, n) << endl;
}
