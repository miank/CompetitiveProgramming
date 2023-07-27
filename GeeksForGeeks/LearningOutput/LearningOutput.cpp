// LearningOutput.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	void Learning(int a[], int n, float &pos, float &neg, float &zero)
	{
		// Your code goes here
		int cntP = 0, cntN = 0, cntZ = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] > 0)
				cntP++;
			if (a[i] < 0)
				cntZ++;
			if (a[i] == 0)
				cntZ++;
		}
		cout << n / cntP << endl << n / cntN << endl << cntZ / n << endl;
	}
};

int main()
{
	Solution obj;
	int n(0);
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin << arr[i];
	}

}

