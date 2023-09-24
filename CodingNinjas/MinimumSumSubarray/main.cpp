#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minimumSum (vector<int>& arr, int n)
{
    // Write your code here.
    int minimum = INT32_MAX;
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];

        if(sum < minimum){
            minimum = min(minimum, sum);
        }

        if(sum > 0){
            sum = 0;
        }
    }    

    return minimum;

}


int main(){
    // Call from here minimumSum() from here. 
}