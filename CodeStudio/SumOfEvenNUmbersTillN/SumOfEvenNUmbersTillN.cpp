// SumOfEvenNUmbersTillN.cpp 

#include <iostream>

long long evenSumTillN(int n) {
	// Write your code here.
	long long sum = 0;
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	return sum;
}