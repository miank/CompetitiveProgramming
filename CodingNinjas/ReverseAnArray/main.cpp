#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    reverse(nums.begin(), nums.end());
    return nums;
}

int main(){
    vector<int> v {5, 7, 8, 1, 6, 3};
    v = reverseArray(5, v);
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v[i] << " ";
    }
    cout << endl;
}