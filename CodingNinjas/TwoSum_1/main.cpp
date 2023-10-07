// TwoSum.cpp 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string read(int n, vector<int> book, int target)
{
    // Write your code here.
    sort(book.begin(), book.end());

    int l = 0;
    int h = n - 1;
    string result = "NO";
    
    while (l < h)
    {
        /* code */
        if(book[l] + book[h] == target)
        {
            result = "YES";
            break;
        }
        else if( book[l] + book[h] < target)
        {
            l++;
        }
        else{
            h--;
        }
    }
    
    return result;

}


int main()
{
	int n(0), target(0), ele(0);
	vector<int> v;

	cin >> n >> target;

    for (int i = 0; i < n; i++) {
        cin >> ele;
        v.push_back(ele);
    }

	vector<pair<int, int>> vp;

	cout << read(n, v, target);
	return 0;
}

