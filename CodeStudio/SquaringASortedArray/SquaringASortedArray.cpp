// SquaringASortedArray.cpp 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector < int > sqsorted(vector < int >& arr) {
    // Write your code here.

    for (int i = 0; i < arr.size(); i++) {
        arr[i] = arr[i] * arr[i];
    }

    sort(arr.begin(), arr.end());



    return arr;
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

    v = sqsorted(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
