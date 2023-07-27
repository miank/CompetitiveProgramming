// NonRepeatingCharacter.cpp 

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution
{
public:
	//Function to find the first non-repeating character in a string.
	char nonrepeatingCharacter(string s)
	{
		//Your code here
		map<char, int>m;
		for (auto it : s) 
			m[it]++;
		for (auto it : s)
		{
			if (m[it] == 1)
			{
				return it;
			}
		}
		return '$';
	}
};

// { Driver Code Starts.

int main() {

	int T;
	cin >> T;

	while (T--)
	{

		string S;
		cin >> S;
		Solution obj;
		char ans = obj.nonrepeatingCharacter(S);

		if (ans != '$')
			cout << ans;
		else cout << "-1";

		cout << endl;

	}

	return 0;
}