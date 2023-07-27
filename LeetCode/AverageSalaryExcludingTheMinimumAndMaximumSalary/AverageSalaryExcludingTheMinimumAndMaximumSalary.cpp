// AverageSalaryExcludingTheMinimumAndMaximumSalary.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	double average(vector<int>& salary) 
	{
		// Sorting the array to get the min in front and max at end
		std::sort(salary.begin(), salary.end());
		double result = 0.0;
		// iterating the vector leaving the min and end
		for (int i = 1; i < salary.size() - 1; i++)
		{
			result += salary[i];
		}
		// check the count of element apart from min and max
		int eleCount = salary.size() - 2;
		// getting the average 
		return result / eleCount;
	}
};

int main()
{
	Solution obj;
	vector<int> v;
	int n(0), ele(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}
	double result = obj.average(v);
	cout << result << endl;
	return 0;
}
