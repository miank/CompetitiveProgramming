#include <iostream>
#include <vector>
using namespace std;

int isSorted(int n, vector<int> a) {
    // Write your code here.
    int l = 0;
    int h = a.size() - 1;
    bool result = 1;

    while (l < h)
    {
        /* code */
        if(a[l] > a[h]){
            result = 0;
            break;
        } else {
            l++;
            h--;
        }
    }
    
    return result;

}
