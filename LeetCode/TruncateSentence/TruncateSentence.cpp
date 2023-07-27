// TruncateSentence.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string truncateSentence(string s, int k) {

		int len = s.size();
		int cnt = 0;
		string str;
		for (int i = 0; i < len; i++)
		{
			if (s[i] == ' ')
			{
				cnt++;
				if (cnt == k)
				{
					break;
				}
				str += ' ';
			}
			else
			{
				str += s[i];
			}
		}
		return str;
	}
};

int main()
{
	string str = "What is the solution to this problem";
	int k;
	cin >> k;

	Solution obj;
	cout << obj.truncateSentence(str, k) << endl;
	return 0;
}
