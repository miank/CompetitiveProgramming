// CheckIfArrayIsSorted.cpp 

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        bool result = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                result = false;
                break;
            }
        }

        return result;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";

    }
    return 0;
}