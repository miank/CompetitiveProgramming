// ConsecutiveCharacters.cpp 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	int maxPower(string s) {
		int ans = INT_MIN, now = 1;

		for (int i = 0; i < s.length(); i++) {
			//if the current char is the same as the next char then increase now
			if (i + 1 < s.length() && s[i] == s[i + 1]) {
				now++;
			}
			else {
				//if the 2 consecutive characters are not same then update ans
				ans = max(ans, now);
				//assign 1 to now to store the count for the next consecutive chars
				now = 1;
			}
		}
		//return ans as the final answer
		return ans;


	}
};

int main()
{
	string str;
	cin >> str;
	Solution obj;
	cout << obj.maxPower(str) << endl;
	return 0;
}
