// ReplaceSpaces.cpp 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string replaceSpaces(string& str) {
	// Write your code here.
	string str1 = "@40";
	string temp = "";
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ') {
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}
		else 
		{
			temp.push_back(str[i]);
		}
	}
	return str;
}

int main()
{
	string str;
	getline(cin ,str);
	cout << replaceSpaces(str) << endl;
	return 0;
}

