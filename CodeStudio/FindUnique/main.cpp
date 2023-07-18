#include "pch.h"

#include <iostream>
#include <map>
using namespace std;


int findUnique(int* arr, int size)
{
    //Write your code here
    map<int, int> m1;

    for (int i = 0; i < size; i++) {
        m1[arr[i]]++;
    }

    for(auto i : m1) {
        if (i.second == 1) {
            return i.first;
        }
    }
    return -1;
}
int main()
{
    int size(0), ele(0);
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> ele;
        arr[i] = ele;
    }

    cout << findUnique(arr, size) << endl;
    return 0;
}
