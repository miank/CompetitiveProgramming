// TotalSalary.cpp // need to check again

#include <iostream>
#include <string>
using namespace std;

int totalSalary(int basic, char grade)
{
	// Write your code here.
	double hra = (20 * basic) / 100;
	double da = (50 * basic) / 100;
	double pf = (11 * basic) / 100;
	double totalSal = 0;
	if (grade == 'A')
	{
		totalSal = basic + hra + da + 1700 - pf;
	}
	else if (grade == 'B')
	{
		totalSal = basic + hra + da + 1500 - pf;
	}
	else 
	{
		totalSal = basic + hra + da + 1300 - pf;
	}
	return totalSal;
}

int main()
{
	int basic(0);
	char grade(0);
	cin >> basic >> grade;
	cout << totalSalary(basic, grade) << endl;
	return 0;
}

