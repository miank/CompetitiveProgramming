// MaxConsecutiveOnes.cpp 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int cnt = 0;
        int max1 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                cnt = 0;
            }
            else
            {
                cnt++;
                /*if (max1 < cnt)
                    max1 = cnt;*/
                max1 = max(max1, cnt);
            }
        }
        return max1;
    }
};

int main()
{
    int n(0), ele(0);
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }

    Solution obj;
    cout << obj.findMaxConsecutiveOnes(v) << endl;
    return 0;
}
