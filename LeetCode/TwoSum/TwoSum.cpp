// TwoSum.cpp 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool hasTwoSumZero(vector<int> &A) {
	// add your logic here
	int target = 0;
	int i = 0, j = A.size() - 1;

	while (i < j) {
		if (A[i] + A[j] == target) {
			return true;
		}
		else if (i + j < target) {
			i++;
		}
		else {
			j--;
		}
	}
	return false;
}

int main()
{
	int t(0);
	cin >> t;
	vector<int> v;
	
	while (t--)
	{
		int n(0), ele(0);
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v.push_back(ele);
		}

		cout << hasTwoSumZero(v) << endl;
	}
	return 0;
}
