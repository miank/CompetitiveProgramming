// JewelsAndStones.cpp 

#include "pch.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
	int numJewelsInStones(string J, string S) 
	{
		map<char, int> m1;

		for (int i = 0; i < S.size (); i++)
		{
			m1[S[i]]++;
		}

		int sum = 0;
		
		for (auto x : J)
		{
			auto it = m1.find(x);
			if (it != m1.end())
			{
				sum += it->second;
			}
		}
		return sum;
	}
};

int main()
{
	Solution obj;
	string str1, str2;
	cin >> str1 >> str2;

	int num = obj.numJewelsInStones(str1, str2);
	
	cout << num << endl;
	
	return 0;
}
