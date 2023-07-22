// MissingAndRepeatingNumbers.cpp 

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

pair<int, int> missingAndRepeating(vector<int>& arr, int n)
{
	// Write your code here 
	map<int, int> m1;
	pair<int, int> p1;
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++)
	{
		m1[arr[i]]++;
	}

	int i = 1;
	bool flag = true;
	int missingNumber = 0;
	for (auto x : m1) {
		if (x.first != i) {
			if (flag) {
				//missing number
				p1.first = i;
				flag = false;
			}
		}
		if (x.second > 1) {
			// Repeated number
			p1.second = x.first;
		}
		i++;
	}
	if (p1.first == 0) {
		p1.first = arr[n - 1] + 1;
	}

	return p1;

}


int main()
{
	int n(0), ele(0);
	cin >> n;

	vector<int> v1;
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v1.push_back(ele);
	}

	pair<int, int> p1;
	p1 = missingAndRepeating(v1, n);

	cout << p1.first << " " << p1.second << endl;
	return 0;
}

