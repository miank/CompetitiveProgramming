#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

bool areIsomorphic(string &str1, string &str2)
{
    // Write your code here
    unordered_map<char, char> charCount;
   
    // iterating over str1 and str2
    for (int i = 0; i < str1.length(); i++)
    {
       
        // if str1[i] is a key in charCount
        if (charCount.count(str1[i]))
        {
           
            // checking if the value in charCount for key
            // str1[i] is equal to str2[i]
            if (charCount[str1[i]] != str2[i]) {
                return false;
            }
        }
        // if str2[i] is not a value in charCount
        else {
            // checking if str2[i] is already a value in
            // charCount
            vector<char> values;
            for (auto it : charCount) {
                values.push_back(it.second);
            }
            if (find(values.begin(), values.end(), str2[i])
                != values.end()) {
                return false;
            }
            else {
                charCount[str1[i]] = str2[i];
            }
        }
    }
    return true;
}


int main(){
    string str = "aab";
    string str1 = "xyz";
    
    bool result = areIsomorphic(str, str1);
    cout << result << endl;
    return 0;
}