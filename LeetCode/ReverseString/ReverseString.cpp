// ReverseString.cpp 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};

int main()
{
    vector<char> ch;
    int n(0), ele(0);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        ch.push_back(ele);
    }

    Solution obj;
    obj.reverseString(ch);
    return 0;
}
