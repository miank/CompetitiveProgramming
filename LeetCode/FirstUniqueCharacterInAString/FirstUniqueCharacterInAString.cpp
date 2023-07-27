// FirstUniqueCharacterInAString.cpp 

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
	int firstUniqChar(string s) {
		unordered_map<char, int> map;
		for (int i = 0; i < s.length(); i++)
		{
			map[s[i]]++;
		}
		for (int i = 0; i < s.length(); i++)
		{
			if (map[s[i]] == 1)
				return i;
		}
		return -1;
	}
};

int main()
{
	Solution obj;
	string str = "loveleetcode";
	int result = obj.firstUniqChar(str);
	cout << result << endl;
	return 0;
}

