// WordWithMaximumFrequency.cpp 

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

string maximumFrequency(string s) {
	// Complete the function
	
	map<string, int> m1;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ') {
			string str = "";
			while (s[i] != ' ' && s[i] != '\0') {
				str += s[i];
				i++;
			}
			m1[str]++;
		}
	}

	int max = 0;
	string s1;
	for (auto i : m1) {
		if (max <= i.second)
		{
			max = i.second;
			s1 = i.first;
		}		
	}
	return s1;
}


int main()
{
	string str = "the devil in the sky";
	cout << maximumFrequency(str) << endl;
	return 0;
}

