// SingleElementInSortedArray.cpp 

#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	map<int, int> m1;
	int result = {0};

	for (int i = 0; i < arr.size(); i++) {
		m1[arr[i]]++;
	}


	for (auto x : m1) {
		if (x.second == 1) {
			result = x.first;
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

	cout << singleNonDuplicate(v) << endl;

	return 0;
}

