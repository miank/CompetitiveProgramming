// PairSum.cpp 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int>& arr,int n, int s) {
    // Write your code here.
    vector<vector<int>> v;
    sort(arr.begin(), arr.end());

    int low = 0;
    int high = n - 1;
    int cnt = 0;

    while (low < high) {
        if (arr[low] + arr[high] == s) {
            v.push_back(low);
            v.push_back(arr[high]);
           // cout << arr[low] << " " << arr[high] << " ";
            cnt++;
            low++;
            high--;
        }
        else if (arr[low] + arr[high] > s) {
            high--;
        }
        else {
            low++;
        }
    }

    return cnt <= 0 ? -1 : cnt;

}

int main()
{
    int n(0), ele(0), s(0);
    cin >> n >> s;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }
    vector<vector<int>> v1;

    cout << pairSum(v, n, s) << endl;
    
    return 0;
}

