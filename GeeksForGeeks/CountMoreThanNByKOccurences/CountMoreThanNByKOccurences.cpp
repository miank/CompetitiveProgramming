// CountMoreThanNByKOccurences.cpp 

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution
{
public:
    int countOccurence(int arr[], int n, int k) 
    {
        int res = n / k;
        int cnt = 0;
        map<int, int> m1;
        for (int i = 0; i < n; i++)
        {
            m1[arr[i]]++;
        }

        for (auto x : m1)
        {
            if (x.second > res)
            {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int *arr = new int[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

//1
//8
//3
//1
//2
//2
//1
//2
//3
//3
//4