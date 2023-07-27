// CheckIfOneStringSwapCanMakeStringsEqual.cpp 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	bool areAlmostEqual(string s1, string s2) {
		int l1 = s1.size();
		int l2 = s2.size();
		if (l1 != l2) {
			return false;
		}

		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		if (s1 == s2)
		{
			return true;
		}
		else {
			return false;
		}

	}
};

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	Solution obj;
	cout << obj.areAlmostEqual(str1, str2) << endl;
	return 0;
}
