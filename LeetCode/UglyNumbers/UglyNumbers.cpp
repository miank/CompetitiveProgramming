// UglyNumbers.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	bool isUgly(int n) {
		if (n == 1)
			return true;
		while (n)
		{
			if (n % 2 == 0)
				n /= 2;
			else if (n % 3 == 0)
				n /= 3;
			else if (n % 5 == 0)
				n /= 5;
			else
				break;
		}
		if (n == 1)
			return true;
		return false;
	}
};


int main()
{
	Solution obj;
	cout << obj.isUgly(6) << endl;
	return 0;
}

