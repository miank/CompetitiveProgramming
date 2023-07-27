// ValidPalindrome.cpp 

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	bool isPalindrome(string s) {
		string s1 = "";
		for (char c : s) {
			if (c >= 'A' && c <= 'Z')
				s1 += (char)c + 32;
			else if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
				s1 += c;
		}

		string s2 = s1;
		reverse(s2.begin(), s2.end());
		cout << s1 << " " << s2;
		if (s2 == s1)
			return true;
		return false;
	}
};
