// RemoveOccurences.cpp 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		int n(0), num(0), ele(0);
		cin >> n >> num;
		vector<int> v;

		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v.push_back(ele);
		}

		int l = 0, h = n - 1, cnt(0);

		while (l < h)
		{
			if (v[l] == num) {
				cnt++;
			}
			if (v[h] == num) {
				cnt++;
			}
			l++;
			h--;
		}
		
		cout << v.size() - cnt << endl;
	}
	return 0;
}
