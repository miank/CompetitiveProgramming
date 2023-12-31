// Cpp_Map.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
using namespace std;

void add_value(map<int, int> &m, int x, int y);

int find_value(map<int, int> &m, int x);
void print_contents(map<int, int> &m);
int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		map<int, int> m;
		int q;
		cin >> q;
		while (q--)
		{
			char c;
			cin >> c;
			if (c == 'a')
			{
				int x, y;
				cin >> x >> y;
				add_value(m, x, y);
			}
			if (c == 'b')
			{
				int y;
				cin >> y;
				cout << find_value(m, y) << " ";
			}
			if (c == 'c')
			{
				print_contents(m);
			}



		}
		cout << endl;
	}
	return 0;
}// } Driver Code Ends


/* Adds a value with key x and value y to the map*/
void add_value(map<int, int> &mp, int x, int y)
{
	//Your code here
	mp[x] = y;
}

/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int, int> &mp, int x)
{
	//Your code here
	if (mp.find(x) != mp.end())
	{
		return mp[x];
	}

	return -1;
}

/* Prints contents of the map ie keys and values*/
void print_contents(map<int, int> &m)
{
	//Your code here
	for (auto x : m)
	{
		cout << x.first << " " << x.second << " ";
	}
}