// MoveAllZerosToEndOfArray.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	void pushZerosToEnd(int arr[], int n) {
		// code here

		int i = 0;
		int j = 0;

		for (int i = 0; i < n; i++)
		{
			if (arr[j] == 0 && arr[i] != 0)
			{
				swap(arr[j], arr[i]);
				j++;
			}
			if (arr[i] != 0)
			{
				j++;
				continue;
			}			
		}

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
	}
};

int main()
{

	int *arr = new int[5]{ 0, 0, 0, 0, 4 }; 
	// Another test case {0, 0, 0, 4}
	Solution obj;
	obj.pushZerosToEnd(arr, 5);
	return 0;
}
