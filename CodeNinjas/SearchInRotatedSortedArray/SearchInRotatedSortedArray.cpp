// SearchInRotatedSortedArray.cpp 

#include <iostream>
#include <vector>
using namespace std;

int search(int* arr, int n, int key) {
    // Write your code here.

    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    return index;
}

int main()
{
    int n(0), ele(0);
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << search(arr, n, ele) << endl;
    return 0;
}
