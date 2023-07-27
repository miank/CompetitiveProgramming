// FinalValueOfVariableAfterPerformingOperations.cpp 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	int finalValueAfterOperations(vector<string>& operations) {
		int result = 0;
		
		for (int i = 0; i < operations.size(); i++)
		{
			if (operations[i] == "X++")
			{
				result++;
			}
			if (operations[i] == "++X")
			{
				result++;
			}
			if (operations[i] == "--X")
			{
				result--;
			}
			if (operations[i] == "X--")
			{
				result--;
			}
		}
		return result;
	}
};

int main()
{
	Solution obj;
	vector<string> vStr;

	vStr.push_back("X++");
	vStr.push_back("++X");
	vStr.push_back("++X");
	cout << obj.finalValueAfterOperations(vStr);
	return 0;
}
