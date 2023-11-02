/*

Given a string, check if it is a palindrome. A palindromic string is a string that remains the same with its characters reversed.

Input : "ABCBA"
Output: true

Input : "ABCA"
Output: false

*/

#include <iostream>
using namespace std;

class Solution
{
public:
	bool isPalindrome(string s)
	{
		// Write your code here...

		int h = s.size() - 1;
        int l = 0;
        bool result = true;
        while (l < h){
            if(s[l] != s[h]){
                result = false;
                break;
            }
            l++;
            h--;
        }
        return result;
	}
};

int main(){
    string str;
    cin >> str;

    Solution obj;
    cout << obj.isPalindrome(str) << endl;
    return 0;
}