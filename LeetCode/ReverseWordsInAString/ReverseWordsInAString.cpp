// ReverseWordsInAString.cpp 

#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	string reverseWords(string s) {
		string result, temp;

		for (int i = s.size() - 1; i > 0; i++)
		{
			if (i = s.size() - 1 && s[i] == ' ') {
				continue;
			}
			else if (i = 0 && s[i] == ' ') {
				continue;
			}
			else if (s[i] == ' ') {
				temp[i] += ' ';
				reverse(temp.begin(), temp.end());
			}
			else{
				temp[i] += s[i];
			}
		}
		return temp;
	}
};

int main()
{
	string str;
	getline(cin, str);
	Solution obj;
	cout << obj.reverseWords(str) << endl;
	return 0;
}
