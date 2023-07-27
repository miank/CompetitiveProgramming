// MatchSpecificPattern.cpp 

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string encoding(string str) {
	unordered_map<char, int> mp;
	string res = "";

	for (auto x : str) {
		if (mp.find(x) != mp.end()) {
			mp[x]++;
		}
		res += to_string(mp[x]);
	}
	return res;
}

vector<string> findMatchedWords(vector<string> dict, string pattern)
{
	//Your code here
	vector<string>res;
	string ans = encoding(pattern);
	for (auto x : dict) {
		if (pattern.length() == x.size() && encoding(x) == ans) {
			res.push_back(x);
		}
	}
	return res;
}

int main()
{
	int n(0);
	cin >> n;
	vector<string> dict{ "abb","abc","xyz","xyy" };
	string	pattern = "foo";
	vector<string> v;
	v = findMatchedWords(dict, pattern);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	return 0;
}
