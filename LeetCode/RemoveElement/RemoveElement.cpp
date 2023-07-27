// RemoveElement.cpp 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int count = 0;
        // Loop through all the elements of the array
        for (int i = 0; i < nums.size(); i++) {
            // If the element is not val
            if (nums[i] != val) {
                nums[count++] = nums[i];
            }
        }
        return count;

    }
};

int main()
{
    vector<int> v;
    int n(0), ele(0), removeEle(0);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }
    cin >> removeEle;
    Solution obj;
    int vCount = obj.removeElement(v, removeEle);

    for (int i = 0; i < vCount; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}