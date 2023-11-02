#include <bits/stdc++.h> 
#include <vector>
using namespace std;

vector<int> findTriplets(vector<int> &arr, int n) 
{
    //Write your code here.

      sort(arr.begin(), arr.end());

    for (int i = n - 1; i >= 0; i--){
        int j = 0, k = i - 1;

        while(j < k){
            if(arr[i] == arr[j] + arr[k]){
                return {arr[i], arr[j], arr[k]};
            }
            else if(arr[j] + arr[k] < arr[i]){
                j++;
            }
            else{
                k--;
            }
        }
    }
    return {};
}