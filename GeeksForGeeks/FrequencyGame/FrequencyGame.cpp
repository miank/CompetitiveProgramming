// FrequencyGame.cpp 

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int LargButMinFreq(int arr[], int n)
{
	// code here
	int *max = std::max_element(arr, arr + n);
	return *max;
}

int main()
{
	int arr[] = { 2,2,50,50,1 };
	cout << LargButMinFreq(arr, 5) << endl;
	return 0;
}
