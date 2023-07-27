// UniqueElementsInSortedArray.cpp 

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_set>
using namespace std;

// using vector
int removeDuplicates(vector<int> &A) {
	// add logic here
	map<int, int> m1;

	int n = A.size();

	for (int i = 0; i < n; i++)
	{
		m1[A[i]]++;
	}

	return m1.size();
}

// using Set
int removeDuplicates1(vector<int> &A) {
	unordered_set<int> duplicateRemoved;
	for (int i = 0; i < A.size(); i++) {
		duplicateRemoved.insert(A[i]);
	}
	return (int)duplicateRemoved.size();
}

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		int n(0), ele(0);
		cin >> n;
		vector<int> v;

		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v.push_back(ele);
		}

		cout << removeDuplicates(v) << endl;
	}
	return 0;
}

