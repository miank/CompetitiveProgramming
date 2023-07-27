// CumulativeSum.cpp 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> getPositiveCumulativeSum(vector<int> &arr) {
	vector<int> v1;
	v1.push_back(arr[0]);
	v1.push_back(arr[0] + arr[1]);

	if (arr.size() < 2) {
		return v1;
	}
	else {
		int sum = arr[0] + arr[1];
		for (int i = 2; i < arr.size(); i++)
		{
			sum += arr[i];
			v1.push_back(sum);
		}
	}
	return v1;
}
int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		int  n(0), ele(0);
		cin >> n;
		vector<int> v, results;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v.push_back(ele);
		}
		cout << v.size() << endl;
		results = getPositiveCumulativeSum(v);

		for (int i = 0; i < results.size(); i++)
		{
			cout << results[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

