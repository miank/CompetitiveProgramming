// SpecialSum.cpp 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int specialSum(vector<int>& arr, int n) {
    // Write your code here.
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    if (sum < 10) {
        return sum;
    }
    while (sum > 10) {
        int q = sum / 10;
        int rem = sum % 10;
        return q + rem;
    }


}

int main()
{
    int n(0), ele(0);
    cin >> n;

    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v1.push_back(ele);
    }

    cout << specialSum(v1, n) << endl;
    return 0;
}
