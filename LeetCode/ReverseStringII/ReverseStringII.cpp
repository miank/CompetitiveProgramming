// ReverseStringII.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string reverseStr(string s, int k) {
		string str;
		int size = s.size() % 2 == 0 ? s.size() - 1 : s.size() - 2;

		for (int i = 0; i < size; i++)
		{
			swap(s[i], s[i + 1]);
			i++;
		}
		return s;
	}
};

int main()
{
	int k(0);
	string str;
	cin >> str >> k;

	Solution obj;
	cout << obj.reverseStr(str, k) << endl;
	return 0;
}

