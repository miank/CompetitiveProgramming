// MaximumNumberOfWordsFoundInSentences.cpp 

#include <iostream>
#include <string>
#include <vector>
#include <math>
using namespace std;

class Solution {
public:
	int mostWordsFound(vector<string>& sentences) {
		int ans = 0;
		for (auto i : sentences) {
			int mex = count(i.begin(), i.end(), ' ');
			if (mex > ans) ans = mex;
		}
		return ans + 1;
	}
};

int main()
{
	vector<string> sentence{ "alice and bob love leetcode", "i think so too", "this is great thanks very much" };
	Solution obj;
	obj.mostWordsFound(sentence);
}

