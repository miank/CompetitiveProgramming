// DuplicateInArray.cpp 

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int findDuplicate(vector<int> &arr)
{
	// Write your code here 
	map<int, int> m1;

	for (int i = 0; i < arr.size(); i++)
	{
		m1[arr[i]]++; 
	}

	int duplicateNumber = 0;
	for (auto x : m1)
	{
		if (x.second > 1)
		{
			duplicateNumber = x.first;
			break;
		}
	}
	return duplicateNumber;
}

int main()
{
	int ele(0), n(0);
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}
	cout << findDuplicate(v) << endl;
	return 0;
}
