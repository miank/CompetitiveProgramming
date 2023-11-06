#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> findRepeatingAndMissingNumbers(vector<int> nums)
{
    /* code */
    int missing = -1;
    int duplicate = -1;
    int n = nums.size();

    map<int, int> m1;
    vector<int> v1;

    for (int i = 0; i < n; i++)
    {
        m1[nums[i]]++;
    }

    int i = 1;

    for (auto x : m1)
    {
        cout << x.first << " " << x.second << endl;
    }

    for (int i = 1; i <= n; i++)
    {

        if (m1[i] > 1)
            duplicate = i;

        else if (m1[i] == 0)

            missing = i;
    }

    v1.push_back(duplicate);
    v1.push_back(missing);

    return v1;
}

int main()
{
    vector<int> v{1, 2, 4, 2, 5};

    vector<int> v1;

    v1 = findRepeatingAndMissingNumbers(v);

    for (int i = 0; i < v1.size(); i++)
    {
        /* code */
        cout << v1[i] << " ";
    }

    cout << endl;
}