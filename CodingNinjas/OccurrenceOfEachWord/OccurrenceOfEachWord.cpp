// OccurrenceOfEachWord.cpp 

#include <iostream>
#include <map>
using namespace std;

void occurrenceOfEachWord(string s)
{
    // Write your code here
    map<string, int> m1;
    s = s.substr(' ');
    cout << s << endl;

    for (int i = 0; i < s.size() - 1; i++) {
        m1[s[i]]++;
    }

    for (auto x : s) {
        cout << x.first << " " << x.second << endl;
    }
}

int main()
{
    std::cout << "Hello World!\n";
}

