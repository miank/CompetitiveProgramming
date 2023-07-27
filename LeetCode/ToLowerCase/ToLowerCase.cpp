// ToLowerCase.cpp 

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string toLowerCase(string str) 
	{
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
		}
		return str;
	}
};

int main()
{
	string str;
	cin >> str;
	Solution obj;
	string result = obj.toLowerCase(str);
	cout << result << endl;
	return 0;
}

