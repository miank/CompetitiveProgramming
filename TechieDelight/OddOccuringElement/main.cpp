/*

Given an integer array, duplicates are present in it in a way that all duplicates appear an even number of times except one which appears an odd number of times. Find that odd appearing element in linear time and without using any extra memory.

Input: [4, 3, 6, 2, 6, 4, 2, 3, 4, 3, 3]
Output: 4

Assume valid input.

*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
	int findOddOccuringElement(vector<int> const &nums)
	{
		// Write your code here...
        map<int, int> m1;
		for (int i = 0; i < nums.size(); i++)
        {
            /* code */
            m1[nums[i]]++;
        }
        int oddElement = 0;

        for (auto i : m1){
            if(i.second % 2 != 0){
                oddElement = i.first;
                break;
            }
        }		
        return oddElement;
	}
};


int main(){
    Solution obj;
    vector<int> v {4, 3, 6, 2, 6, 4, 2, 3, 4, 3, 3};
    int target(0);
    int n(0), ele(0);

    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cin >> ele;
    //     v.push_back(ele);
    // }
    
    cout << obj.findOddOccuringElement(v);
    return 0;
}