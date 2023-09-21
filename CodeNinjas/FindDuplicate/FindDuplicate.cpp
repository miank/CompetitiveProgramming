// FindDuplicate.cpp 

#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int duplicateNumber(int* arr, int size)
{
    //Write your code here
    map<int, int> m1;

    for (int i = 0; i < size; i++)
    {
        m1[arr[i]]++;
    }

    int result = 0;
    for (auto x : m1) {
        if (x.second > 1) {
            result = x.first;
            break;
        }
    }

    return result;

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

    cout << duplicateNumber(arr, n) << endl;

    return 0;
}