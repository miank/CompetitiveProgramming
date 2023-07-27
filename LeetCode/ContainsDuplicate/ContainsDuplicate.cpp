// ContainsDuplicate.cpp 

#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> m1;
        for (int i = 0; i < nums.size(); i++)
        {
            m1[nums[i]]++;
        }

        for (auto x : m1)
        {
            if (x.second >= 2)
            {
                return true;
            }
        }

        return false;
    }
};


