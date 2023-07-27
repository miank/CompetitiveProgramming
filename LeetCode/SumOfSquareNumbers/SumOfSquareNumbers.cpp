// SumOfSquareNumbers.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	bool judgeSquareSum(int c) {
		bool ans = false;
		int comp = 0;
		int result = 0;
		for (int i = 1; i < c / 2; i++)
		{
			int prod = (i * i) + (i * i);
			if (c == prod)
			{
				ans = true;
				break;
			}
			else
			{
				comp = (i + 1) * (i + 1);
				result = i * i + comp;
				if (result > c) {
					ans = false;
				}
				else if (result == c) {
					ans = true;
					break;
				}
				else {
					continue;
					comp = 0;
					result = 0;
				}
			}
		}
		return ans;
	}
};

int main()
{
	Solution obj;
	int n(0);
	cin >> n;
	cout << obj.judgeSquareSum(n) << endl;
	return 0;
}
