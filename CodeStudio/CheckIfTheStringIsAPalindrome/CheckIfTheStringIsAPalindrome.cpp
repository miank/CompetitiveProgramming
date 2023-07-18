// CheckIfTheStringIsAPalindrome.cpp 

#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string s)
{
    // Write your code here.
    for (auto& x : s) {
        x = tolower(x);
    }

    cout << s << endl;
    bool result = false;
    int i = 0;
    int j = s.size() - 1;
    while (i < j) {
        if (!isalpha(s[i])) {
            continue;
        }
        if (s[i] == ' ')
        {
            continue;
        }
        if (s[i] != s[j]) {
            result = false;
            break;
        }
    }

    return result;

}
int main()
{
    string str;
    cin >> str;
    bool result = checkPalindrome(str);
    cout << result << endl;
    return 0;
}