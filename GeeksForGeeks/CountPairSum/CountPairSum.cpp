#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int countPairs(int arr1[], int arr2[], int m, int n, int x)
    {
        //code here.
        unordered_map<int, int> m1;
        for (int i = 0; i < n; i++)
        {
            m1[arr2[i]]++;
        }
        int cnt = 0;
        for (int i = 0; i < m; i++)
        {
            if (m1.find(x - arr1[i]) != m1.end())
                cnt++;
        }
        return cnt;
    }
};

int main()
{
    int n(0), m(0), x;
    cin >> n >> m >> x;

    int* arr1 = new int[n];
    int* arr2 = new int[m];
    Solution obj;

    int pairCount = obj.countPairs(arr1, arr2, m, n, x);
    cout << pairCount << endl;
    return 0;
}