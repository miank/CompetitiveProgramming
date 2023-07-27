// WinnerOfAnElection.cpp 

	#include <iostream>
	#include <string>
	#include <map>
	using namespace std;

	int main()
	{
		int t(0);
		cin >> t;

		while (t--)
		{
			int n(0);
			cin >> n;
			string str;

			map<string, int> m1;
			for (int i = 0; i < n; i++)
			{
				cin >> str;
				m1[str]++;
			}

			int max = 0;
			string winner;
			for (auto x : m1)
			{
				if (max < x.second)
				{
					max = x.second;
					winner = x.first;
				}
			}
			cout << winner << endl;
		}
		return 0;
	}

