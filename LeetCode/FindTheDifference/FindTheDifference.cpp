// FindTheDifference.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	char findTheDifference(string s, string t) 
	{
		string::size_type c[26] = { 0 };
		char ch = ' ';
		for (int i = 0; i < s.size() || i < t.size(); i++)
		{
			c[s[i] - 'a']++;
			c[t[i] - 'a']--;
		}

		for (int i = 0; i < 26; i++)
		{
			if (c[i] < 0)
			{
				ch = i + 'a';
				break;
			}
		}
		return ch;
	}
};

int main()
{
	string str1, str2;
	//cin >> str1 >> str2;
	Solution obj;
	cout << obj.findTheDifference("abcd", "abcde");
	return 0;
}

