// PartiesAndSeats.cpp 

#include <iostream>
#include <string>
#include <map>
using namespace std;

int Election2019(char party[], int seats[], int n)
{
	//Your code here
	map<char, int> m1;

	for (int i = 0; i < n; i++)
	{
		m1[party[i]] = seats[i];
	}

	int max = -100;

	for (auto x : m1)
	{
		int num = x.second;
		if (num > max)
		{
			max = num;
		}
		cout << x.first << " " << x.second << endl;
	}
	return max; // cout << max << endl;
}

int main()
{
	char arr1[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G' };
	int arr2[] = { 90, 150, 33, 23, 17, 500, 2 };

	cout << Election2019(arr1, arr2, 6) << endl; 

	return 0;
}

