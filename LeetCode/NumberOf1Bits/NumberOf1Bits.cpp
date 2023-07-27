// NumberOf1Bits.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int hammingWeight(uint32_t n) {
		int ones = 0;
		while (n > 0) {
			ones += n % 2;
			n /= 2;
		}
		return ones;
	}
};

int main()
{
	uint32_t n;
	cin >> n;
	Solution obj;
	cout << obj.hammingWeight(n) << endl;
	return 0;
}

// Another Approach 
//int count = 0;
//while (n != 0) {
//	if (n & 1) {
//		count++;
//	}
//	n = n >> 1;
//}
//return count;
