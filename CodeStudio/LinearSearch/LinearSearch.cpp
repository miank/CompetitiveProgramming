// LinearSearch.cpp 

#include <iostream>
#include <vector>
using namespace std;

int linearSearch(int n, int num, vector<int>& arr)
{
    // Write your code here.
    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == num) {
            index = i;
            break;
        }
    }

    return index;
}


int main()
{
    int num(0), n(0), ele(0);
    cin >> num >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }

    cout << linearSearch(n, num, v) << endl;

    return 0;
}
