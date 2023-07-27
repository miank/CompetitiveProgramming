// MultiMapOperations.cpp 

#include <iostream>
#include <map>
#include <string>
using namespace std;


multimap<int, int> multimapInsert(int arr[], int n)
{
	multimap<int, int>mp;
	//Insert arr[i] as key and i as value in the multimap 
	for (int i = 0; i < n; i++)
	{
		mp.insert(make_pair(arr[i], i));
	}
	return mp;
}


void multimapDisplay(multimap<int, int>mp)
{
	//Print the keys and value pairs in new line
	for (auto x : mp)
	{
		cout << x.first << x.second << endl;
	}
}


void multimapErase(multimap<int, int>&mp, int x)
{
	//If and else condition to erase x from the multimap
	if (mp.find(x) != mp.end())
	{
		mp.erase(x);
		cout << "erased " << x;
	}
	else
	{
		cout << "not found";
	}
	cout << endl;
}

int main()
{
	int A[] = { 9, 8, 7, 4, 4, 2, 1, 1, 9, 8 };
	multimap<int, int> m1;
	m1 = multimapInsert(A, 10);
	for (auto x : m1)
	{
		cout << x.first << " " << x.second << endl;
	}
	multimapDisplay(m1);
	multimapErase(m1, 1);
	multimapDisplay(m1);
	return 0;
}
