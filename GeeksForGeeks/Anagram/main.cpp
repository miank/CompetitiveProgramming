#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        bool res=true;
        if(a.length()==b.length()){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
            if(a!=b){
                res=false;
            }
        }
        else {
            res=false;
        }
        return res;
    }

};

int main(){
    string str1, str2;
    Solution obj;
    cin >> str1 >> str2;
    cout << obj.isAnagram(str1, str2) << endl;

    return 0;
}