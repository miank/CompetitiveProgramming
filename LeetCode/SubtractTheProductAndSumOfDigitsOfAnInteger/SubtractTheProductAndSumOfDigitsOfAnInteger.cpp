// SubtractTheProductAndSumOfDigitsOfAnInteger.cpp 
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int subtractProductAndSum(int n) {

		int sum = 0;
		int prod = 1;

		while (n > 0)
		{
			int q = n / 10;
			int r = n % 10;
			n = q;
			sum += r;
			prod *= r;
		}
		int result = prod - sum;
		return result;
	}
};

int main()
{
	int n(0);
	cin >> n;
	Solution obj;
	cout << obj.subtractProductAndSum(n) << endl;
	return 0;
}

