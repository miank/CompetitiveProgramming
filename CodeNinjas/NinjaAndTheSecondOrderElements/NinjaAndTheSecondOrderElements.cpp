// NinjaAndTheSecondOrderElements.cpp 

#include <iostream>
#include <vector>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here

    int max = a[0], secondMax = 0;
    vector<int> v1;

    for (int i = 1; i < n; i++)
    {
        if (max < a[i]) {
            max = a[i];
            secondMax = max;
        }
    }

    v1.push_back(secondMax);
    return v1;
}


int main()
{
    int n(0), ele(0);
    vector<int> v1, v2;

    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v1.push_back(ele);
    }

    v2 = getSecondOrderElements(n, v1);

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    return 0;

}
