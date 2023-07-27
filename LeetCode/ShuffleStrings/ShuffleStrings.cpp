// ShuffleStrings.cpp 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	string restoreString(string s, vector<int>& indices) {
		string str = s;

		for (int i = 0; i < indices.size(); i++)
		{
			int j = indices[i];
			str[j] = s[i];
		}
		return str;
	}
};

int main()
{
	string str = "codeleet";
	vector<int> v{ 4,5,6,7,0,2,1,3 };

	Solution obj;
	cout << obj.restoreString(str, v) << endl; 
	return 0;
}

