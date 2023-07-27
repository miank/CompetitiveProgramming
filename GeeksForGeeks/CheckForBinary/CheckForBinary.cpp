// CheckForBinary.cpp 

#include <iostream>
#include <string>
using namespace std;

// Return true if str is binary, else false
bool isBinary(string str)
{
	for (int i = 0; i < str.length(); i++)
		if (str[i] != '0' && str[i] != '1')
			return 0;
	return 1;
}

int main()
{
	string str;
	cin >> str;
	cout << isBinary(str) << endl;
	return 0;
}

