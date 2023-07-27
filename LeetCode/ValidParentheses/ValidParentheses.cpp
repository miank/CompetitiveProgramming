// ValidParentheses.cpp 

#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
	bool isValid(string s)
	{
		int len = s.length();
		stack<char> st;
		bool result = true;

		if (s.size() == 1)
			return false;
		for (int i = 0; i < s.length(); i++)
		{
			char ch = s[i];

			if (ch == '(' || ch == '{' || ch == '[')
			{
				st.push(ch);
			}
			else
			{
				if (st.empty())
				{
					return false;
				}
				if (ch == ')' && st.top() != '(')
				{
					return false;
				}
				if (ch == '}' && st.top() != '{')
				{
					return false;
				}
				if (ch == ']' && st.top() != '[')
				{
					return false;
				}
				st.pop();
			}
		}
		if (!st.empty())
		{
			result = false;
		}
		return result;
	}
};

int main()
{
	Solution obj;
	string str = "(";
	cout << obj.isValid(str) << endl;
	return 0;
}