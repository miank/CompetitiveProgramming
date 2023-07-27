// DefangingAnIPAddress.cpp 

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string defangIPaddr(string address) 
	{
		string str;
		for (int i = 0; i < address.length(); i++)
		{
			if (address[i] == '.')
			{
				str.push_back('[');
				str.push_back('.');
				str.push_back(']');
			}
			else
			{
				str.push_back(address[i]);
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
	str = obj.defangIPaddr(str);
	cout << str << endl;
	return 0;
}

