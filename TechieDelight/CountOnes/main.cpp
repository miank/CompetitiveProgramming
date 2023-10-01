/*

Given a sorted binary array, efficiently count the total number of 1's in it.

Input: [0, 0, 0, 0, 1, 1, 1]
Output: 3

Input: [0, 0, 1, 1, 1, 1, 1]
Output: 5

*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	int countOnes(vector<int> const &nums)
	{
		// Write your code here...
		int countOnes = 0;
		
		for(int i = nums.size()- 1; i >= 1; i--){
				if(nums[i] == 0){
					break;
				}
			
				if(nums[i] == 1){
					countOnes++;
				}
		}
		
		return countOnes;
	}
};

int main(){
    Solution obj;
    vector<int> v;
    int target(0);
    int n(0), ele(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> ele;
        v.push_back(ele);
    }
    
    cout << obj.countOnes(v) << endl;
    return 0;
}