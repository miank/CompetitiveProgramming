// RemoveDuplicates_1.cpp 

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

vector<int> removeDuplicates(vector<int> arr) {

    // Write your code here
	vector<int> v;
	unordered_map<int, int> mp;

	int n = arr.size();

	for (int i = 0; i < n; i++) {
		mp[arr[i]]++;
		if (mp[arr[i]] == 1) {
			v.push_back(arr[i]);
		}
	}
	return v;
}

int main()
{
	int n(0), ele(0);
	cin >> n;

	vector<int> v;
	
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}

	v = removeDuplicates(v);

	for (int i = 0; i < v.size() - 1; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	return 0;
}
