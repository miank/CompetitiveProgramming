// PalindromeNumber.cpp 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0)
			return false;
		string str = to_string(x);
		string originalStr = str;
		reverse(str.begin(), str.end());
		if (str == originalStr)
			return true;
		else
			return false;
	}
};

int main()
{
	int num = 0;
	cin >> num;
	Solution obj;
	cout << obj.isPalindrome(num) << endl;
	return 0;
}
