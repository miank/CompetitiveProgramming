#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> missingNumbers(vector<int> &arr, int n) {
    // Write your code here.
    vector<int> v;
    sort(arr.begin(), arr.end());

    int i = arr[0];
    int j = 0;
    
    while(i < n)
    {
        if(i != arr[j])
        {
            v.push_back(i);
            i++;
        }
        else
        {
            j++;
        }
    }    

    return v;                          
}


int main(){
    vector<int> v1{7, 4, 9};
    sort(v1.begin(), v1.end());

    vector<int> v2; 
    missingNumbers(v1, 3);

    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout << v2[i] << " ";
    }
    

    return 0;
}