// SumOrProduct.cpp 

#include <iostream>
#include <string>
using namespace std;

long long int sumOrProduct(long long int n, long long int q)
{
	// Write your code here.
	long long int result = 0;
	const unsigned int M = 1000000007;
	if (q == 1)
	{
		result = 0;
		for (int i = 1; i <= n; i++)
		{
			result += i;
		}
	}
	else
	{
		result = 1;
		for (int i = 1; i <= n; i++)
		{
			result = (result *i) % M;
		}
	}
	return result;
}

int main()
{
	int t(0);
	cin >> t;
	while (t > 0)
	{
		long long int n(0), q(0);
		cin >> n >> q;
		cout << sumOrProduct(n, q) << endl;
		t--;
	}
	return 0;
}
