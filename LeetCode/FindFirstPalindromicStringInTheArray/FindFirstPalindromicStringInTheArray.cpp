// FindFirstPalindromicStringInTheArray.cpp 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	string firstPalindrome(vector<string>& words) {
		
		string palindromeStr = "";
		for (int i = 0; i < words.size(); i++)
		{
			string reverseStr = words[i];
			string tempStr = words[i];
			reverse(reverseStr.begin(), reverseStr.end());
			if (reverseStr == tempStr)
			{
				palindromeStr = tempStr;
				break;
			}
			else
			{
				continue;
			}
		}
		return palindromeStr;
	}
};

int main()
{
	vector<string> vStr;
	string str;
	cin >> str;

	vStr.push_back(str);
	Solution obj;
	cout << obj.firstPalindrome(vStr) << endl;
	return 0;
}
