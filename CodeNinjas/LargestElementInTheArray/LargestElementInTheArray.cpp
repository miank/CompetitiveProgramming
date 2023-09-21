// LargestElementInTheArray.cpp 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestElement(vector<int>& arr, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    int size = arr.size() - 1;
    return arr[size];

}

