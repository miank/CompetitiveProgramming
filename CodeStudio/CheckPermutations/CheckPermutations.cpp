// CheckPermutations.cpp 

#include <iostream>
#include <string>
#include <map>
using namespace std;

bool areAnagram(string& str1, string& str2) {
    
    if (str1.size() != str2.size()) {
        return false;
    }
    map<char, int> m1;
    bool result = true;

    for (int i = 0; i < str1.size(); i++)
    {
        m1[str1[i]]++;
    }

    for (int j = 0; j < str2.size(); j++)
    {
        m1[str2[j]]++;
    }

    for (auto x : m1) {
        if (x.second < 2) {
            result = false;
        }
    }
    return result;
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    cout << areAnagram(str1, str2) << endl;
    return 0;
}

