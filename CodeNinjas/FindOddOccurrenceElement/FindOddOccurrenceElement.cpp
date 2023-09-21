// FindOddOccurrenceElement.cpp 

#include <iostream>
#include <map>
using namespace std;

int findOdd(int* arr, int n)
{
    // Write your solution here.
    map<int, int> m1;
    for (int i = 0; i < n; i++)
    {
        m1[arr[i]]++;
    }

    int cnt = -1;

    for (auto x : m1) {
        if (x.second % 2 != 0) {
            cnt = x.first;
        }
    }

    return cnt;
}

int main()
{
    int n(0);
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findOdd(arr, n) << endl;

    return 0;
}
