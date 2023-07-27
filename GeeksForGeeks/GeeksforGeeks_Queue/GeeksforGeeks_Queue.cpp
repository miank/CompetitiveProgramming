// GeeksforGeeks_Queue.cpp 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	int t(0), n(0);
	cin >> t;


	while (t--)
	{
		cin >> n;
		queue<int> q;
		for (int i = 1; i <= n; i++)
		{
			q.push(i);
		}

		while (q.size() != 1)
		{
			int x = q.front();
			q.pop();
			q.pop();
			q.push(x);
		}

		cout << q.front() << endl;
	}
	return 0;
}

