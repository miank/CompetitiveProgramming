// ValidPerfectSquare.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	bool isPerfectSquare(int num) {
		if (!num)
			return false;

		if (num == 1)
			return true;

		//main code
		for (int i = 1; i <= num / i; i++)
		{
			if (i*i == num)
			{
				return true;
			}
		}
		return false;
	}
};

int main()
{
	int n(0);
	cin >> n;
	Solution obj;
	cout << obj.isPerfectSquare(n) << endl;
	return 0;
}

