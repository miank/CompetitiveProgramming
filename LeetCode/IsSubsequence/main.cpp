#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        map<char, int> m1;
        map<char, int> m2;
        bool result = true;

        for (int i = 0; i < t.size(); i++)
        {
            /* code */
            m1[t[i]]++;
        }

        for (auto x : m1){
            cout << x.first << " " << x.second << endl; 
        }
        
        int len = sizeof(s) - 1;
        cout << "Hello " << len << endl;
        int i = 0;
        while(len--){
            cout << s[i] << "HxcvxcvxcELLO " << endl;
            if(m1.find(s[i]) != m1.end()){
                result = false;
                cout << "Error " << endl;
                break;
            }  
        }
        return false;
    }
};

int main(){
    string str1, str2;
   // cin >> str1 >> str2;

    Solution obj;
    bool result = obj.isSubsequence("abc", "ahbgdc");
    cout << result << endl;
    return 0; 

}