// RemoveSpaces.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
	string modify(string s)
	{
		//code here.
		string str;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] != ' ')
				str += s[i];
		}
		return str;
	}
};