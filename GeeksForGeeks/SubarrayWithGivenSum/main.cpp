#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int sum = 0;
        int j = 0;
        vector<int> v;

        for (int i = 0; i < arr.size() - 1; i++)
        {
            /* code */
            sum += arr[i];
            
            if (sum > s){
                sum = sum - arr[j];
                j++;
            }
            if(sum == s){
                v.push_back(j + 1);
                v.push_back(i + 1);
            }
        }
        return v;
    }
};


int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cout << "Hello" << endl;
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}