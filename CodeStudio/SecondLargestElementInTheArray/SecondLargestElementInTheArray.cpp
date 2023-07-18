// SecondLargestElementInTheArray.cpp 

#include <iostream>
#include <vector>
using namespace std;

int findSecondLargest(int n, vector<int>& arr)
{
    // Write your code here.

    if (arr.size() < 2) {
        return -1;
    }

    int large = -1;
    int secondLarge = -1;

    if (arr[0] < arr[1]) {
        large = arr[1];
        secondLarge = arr[0];
    }
    else {
        large = arr[0];
        secondLarge = arr[1];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > large) {
            large = arr[i];
        }
        if (arr[i] > secondLarge) {
            secondLarge = arr[i];
        }
    }
    if (large == secondLarge) {
        secondLarge -1;
    }
    return secondLarge;
}

int main()
{
    int n(0), ele(0);
    cin >> n >> ele;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }

    cout << findSecondLargest(n, v) << endl;

    return 0;    
}