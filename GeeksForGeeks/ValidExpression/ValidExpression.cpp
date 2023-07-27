// ValidExpression.cpp 

#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool valid(string str);
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str;
        getline(cin, str);
        cout << valid(str) << endl;
    }
    return 0;
}


bool valid(string s)
{
    // code here
    stack<char> st;

    for (auto x : s)
    {
        if (x == '(' or x == '{' or x == '[')
        {
            st.push(x);
        }
        else
        {
            if (!st.empty())
            {
                if (st.top() == '(' and x == ')')
                {
                    st.pop();
                }
                else if (st.top() == '{' and x == '}')
                {
                    st.pop();
                }
                else if (st.top() == '[' and x == ']')
                {
                    st.pop();
                }
            }
            else
            {
                return 0;
            }
        }
    }

    return st.empty() ? 1 : 0;

}