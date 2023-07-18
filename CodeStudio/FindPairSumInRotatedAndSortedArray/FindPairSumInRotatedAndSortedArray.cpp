// FindPairSumInRotatedAndSortedArray.cpp 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int findPairSum(vector<int> arr, int target)
{
    //Write your code here
    int i = 0;
    int j = arr.size() - 1;
    int result = -1;

    while (i < j) {
        if (arr[i] + arr[j] == target) {
            result = 1;
            cout << i << " " << j << endl;
            break;
        }
        else if (arr[i] + arr[j] > target) {
            j--;
        }
        else {
            i++;
        }
    }
    return result;

}
int main()
{
    int n(0), ele(0), target(0);
    cin >> n >> target;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }

    cout << findPairSum(v, target) << endl;
    return 0;
}

