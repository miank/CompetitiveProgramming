// DisplayLongestName.cpp 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int compare(string str1, string str2) {
	if (str1.length() < str2.length())
		return 1;
	return 0;
}

class Solution {
public:
	string longest(string names[], int n)
	{
		sort(names, names + n, compare);
		return names[n - 1];
	}
};

int main()
{
	int n(0);
	cin >> n;
	string strList[5];
	for (int i = 0; i < n; i++)
	{
		cin >> strList[i];
	}

	Solution obj;
	cout << obj.longest(strList, 5) << endl; 
	return 0;
}