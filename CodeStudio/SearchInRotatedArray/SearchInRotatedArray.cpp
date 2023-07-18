// SearchInRotatedArray.cpp 
#include <iostream>
using namespace std;

int search(int* arr, int n, int key) {
    // Write your code here.
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (key == arr[i]) {
            index = i;
            break;
        }
    }

    return index;
}


int main()
{
    int n(0), key(0);
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> key;

    cout << search(arr, n, key) << endl;

    return 0;
}
