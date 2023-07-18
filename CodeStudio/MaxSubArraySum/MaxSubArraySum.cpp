// MaxSubArraySum.cpp 

#include <iostream>
#include <algorithm>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    if (n == 0)
        return 0;

    sort(arr.begin(), arr.end());

    long long sum = 0, maxSum = arr[0];

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0) {
            sum = 0;
            maxSum = max(maxSum, sum);
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
