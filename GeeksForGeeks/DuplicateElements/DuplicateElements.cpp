// DuplicateElements.cpp 

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Geeks
{
	// print the elements which appear more than
	// once in the array in sorted order
public:
	void SortedDuplicates(int arr[], int n)
	{
		//Your code here
		map<int, int> m1;

		for (int i = 0; i < n; i++)
		{
			m1[arr[i]]++;
		}

		for (auto x : m1)
		{
			if (x.second > 1)
			{
				cout << x.first << " " << x.second << endl;
			}
		}
	}
};

int main()
{
	int arr[] = { 3, 4, 5, 7, 8, 1, 2, 1, 3 };
	Geeks obj;
	obj.SortedDuplicates(arr, 9);

}
