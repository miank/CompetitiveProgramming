// PrintAnagramsTogether.cpp 

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<vector<string> > Anagrams(vector<string>& string_list) {
		//code here
		unordered_map<string, vector<string>>m;
		for (int i = 0; i < string_list.size(); i++) {
			string s = string_list[i];
			sort(s.begin(), s.end());
			m[s].push_back(string_list[i]);
		}
		vector<vector<string>> ans;
		for (auto i : m) {
			ans.push_back(i.second);
		}
		return ans;
	}
};

int main()
{
	string words[] = { "act","god","cat","dog","tac" };
	vector<string> v;
	for (int i = 0; i < 5; i++)
	{
		v.push_back(words[i]);
	}

	vector<vector<string>> result;
	Solution obj;
	obj.Anagrams(v);

}
