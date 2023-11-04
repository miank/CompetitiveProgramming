#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int maxDistance(int arr[], int n)
    {
    //Code here

    unordered_map<int, int> mp;

    int max_dis = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        if(mp.find(arr[i]) == mp.end()){
            mp[arr[i]] = i;
        }else{
            max_dis = max(max_dis, i - mp[arr[i]]);
        }
    }    
    return max_dis;

    }
};

int main(){

    Solution obj;
    int *arr = new int[8]{1, 1, 2, 2, 2, 1, 3, 4};

    cout << obj.maxDistance(arr, 8) << endl;

    return 0;
}