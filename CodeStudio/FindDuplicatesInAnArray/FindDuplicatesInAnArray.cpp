// FindDuplicatesInAnArray.cpp 
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

vector < int > findDuplicates(vector < int >& arr, int n) {
    // Write your code here.
    map<int, int> m1;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        m1[arr[i]]++;
    }

    for (auto x : m1) {
        if (x.second >= 2) {
            v.push_back(x.first);
        }
    }
    return v;
}

int main()
{
    int n(0), ele(0);
    cin >> n;

    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v1.push_back(ele);
    }

    v2 = findDuplicates(v1, n);

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " " << endl;
    }

    return 0;
}
