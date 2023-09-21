// Test.cpp 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v{3, 5, -4, 8, 11, -1, 6, 9};
	int targetSum = 10;
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " " << endl;
	}
	int j = v.size() - 1;
	int i = 0;
	while( i < j) {
		if (v[i] + v[j] == targetSum) {
			cout << v[i] << " " << v[j] << endl;
			i++;
			j--;
		}
		else if (v[i]+ v[j] < targetSum) {
			i++;
		}
		else {
			j--;
		}
	}

	return 0;



}