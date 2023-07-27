
// LengthOfLastWord.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int lengthOfLastWord(string s) {

		int n = s.size();
		int countSpace = 0;
		int countWords = 0;

		for (int i = n-1; i >= 0; i--)
		{			
			if (s[i] == ' ')
			{
				continue;
			}
			if (s[i] != ' ')
			{
				countWords++;
			}
			if (i - 1 > 0)
			{
				if (s[i - 1] == ' ')
				{
					break;
				}
			}
		}
		return countWords;
	}
};

int main()
{
	string str = "a ";
	Solution obj;

	cout << obj.lengthOfLastWord(str) << endl;
	return 0;
}
