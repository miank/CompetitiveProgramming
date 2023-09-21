// CopyAndReverseTheArray.cpp

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> copyAndReverse(vector<int> arr, int n) {
	// Write your code here.

    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    return arr;

}

int main()
{
    int n(0), ele(0);
    cin >> n;

    vector<int> v, v1;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }

    v1 =  copyAndReverse(v, n);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}
