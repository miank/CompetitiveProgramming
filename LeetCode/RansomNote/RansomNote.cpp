// RansomNote.cpp 

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
#define NO_OF_CHARS 256

class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) 
	{	
		vector<int>v(26, 0);
		for (int i = 0;i < magazine.size();i++)
			v[magazine[i] - 'a']++;
		for (int i = 0;i < ransomNote.size();i++)
			if (v[ransomNote[i] - 'a']-- <= 0)
				return 0;
		return 1;
	}
};

int main()
{
	string str1 = "aab";
	string str2 = "baa";
	Solution obj;
	cout << obj.canConstruct(str1, str2) << endl;
	return 0;
}
