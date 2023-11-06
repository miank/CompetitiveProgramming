// RotatedArray.cpp

#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArray(vector<int> arr, int k)
{
    // Write your code here.

    int i = 1;
    int n = arr.size();

    while (i <= k)
    {
        int temp = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = temp;
        i++;
    }

    return arr;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    int k;

    vector<int> v1;
    cin >> k;

    v1 = rotateArray(v, k);

    for (int i = 0; i < v1.size(); i++)
    {
        /* code */
        cout << v1[i] << " ";
    }

    cout << endl;

    return 0;
}
