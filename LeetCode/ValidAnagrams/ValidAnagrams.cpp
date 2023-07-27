// ValidAnagrams.cpp 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	bool isAnagram(string s, string t) {
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());

		if (s == t)
			return true;
		else
			return false;
	}
};


int main()
{
	Solution obj;
	cout << obj.isAnagram("anagram", "nagaram") << endl;
	cout << obj.isAnagram("rat", "car") << endl;
	return 0;
}

