// RemoveConsecutiveDuplicates.cpp 

#include <iostream>
#include <string>
using namespace std;

string removeDuplicate(string& s)
{
    // Write your code here
    string k;

    for (int i = 0; i < s.size(); i++) {

        if (s[i] != s[i + 1]) {
            k += s[i];
        }
    }
    return k;
}

int main()
{
    string str;
    int n(0);
    char ch;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        str += ch;
    }
    cout << removeDuplicate(str) << endl;
    return 0;
}
