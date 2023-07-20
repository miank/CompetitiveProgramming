// MaxSubArraySum.cpp 

#include <iostream>
#include <algorithm>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long maxSum = 0;
    long long currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if (currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
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
    cout << maxSubarraySum(arr, n) << endl;

    return 0;

}
