#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
	bool isAnagram(string X, string Y)
	{
		// Write your code here...
		 if (X.length() != Y.length()) {
        return false;
    }
 
    // create an empty map
    unordered_map<int, int> freqX;
 
    // maintain a count of each character of `X` on the map
    for (char x: X) {
        freqX[x]++;
    }
 
    // create a second map
    unordered_map<int, int> freqY;
 
    // maintain a count of each character of `Y` on the map
    for (char y: Y) {
        freqY[y]++;
    }
 
    // return true if both maps have the same content
    return freqX == freqY;
        
	}
};


int main(){
    Solution obj;
    string str1, str2;
    cin >> str1 >> str2;

    obj.isAnagram(str1, str2);

    return 0;
}