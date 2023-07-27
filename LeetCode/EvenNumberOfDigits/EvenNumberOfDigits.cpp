// EvenNumberOfDigits.cpp 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> getEvenDigitNumbers(vector<int> &arr) {
	// add your logic here
	vector<int> v;
	for (int i = 0; i < arr.size(); i++)
	{
		string str = to_string(arr[i]);
		int result = str.length() / 2 == 0 ? 1 : 0;
		if (result)
			v.push_back(arr[i]);
		else
			continue;
	}
	return v;
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
		results = getEvenDigitNumbers(v);

		for (int i = 0; i < results.size(); i++)
		{
			cout << results[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
