// ReverseWordsInAString.cpp 

#include <iostream>
#include <string>
using namespace std;

string reverseString(string& str) {
	// Write your code here.	

	int len = str.size() - 1;
	string str1, reverseStr;

	for (int i = len; i > 0; i--)
	{
		if (str[i] != ' ') {
			str1 += str[i];
		}

		if (str[i] == ' ') {
			reverse(str1.begin(), str1.end());
			reverseStr += str1 + ' ';
		}
	}

	return reverseStr;

}

int main()
{
	string str;
	cout << reverseString(str) << endl;
	return 0;
}

