// CheckSetBits.cpp

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int isBitSet(int N) {
		// code here 
		int result = 1;
		while (N > 0)
		{
			if (N % 2 == 0)
			{
				result = 0;
				break;
			}
			N = N / 2;
		}
		return result;
	}
};

// { Driver Code Starts.
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int N;
		cin >> N;
		Solution ob;
		cout << ob.isBitSet(N) << endl;
	}
	return 0;
}

