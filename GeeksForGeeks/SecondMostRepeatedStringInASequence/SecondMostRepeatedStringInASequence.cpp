// SecondMostRepeatedStringInASequence.cpp 

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
	string secFrequent(string arr[], int n)
	{
		//code here.
		int first = -100;
		int secondm = -100;

		unordered_map<string, int> mp;
		for (int i = 0; i < n; i++)
		{
			mp[arr[i]]++;
		}

		for (auto it : mp)
		{
			if (it.second > first)
			{
				first = it.second;
			}
		}

		string ans = "";
		for (auto it : mp)
		{
			if (it.second != first && it.second > secondm)
			{
				ans = it.first;
				secondm = it.second;
			}
		}

		return ans;
	}
};

int main()
{
	int n(0);
	cin >> n;
	
	string arr[] = { "aaa", "bbb", "ccc", "bbb", "aaa", "aaa" };
	Solution obj;
	cout << obj.secFrequent(arr, n);

	return 0;
}
