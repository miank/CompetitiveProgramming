/*

Given a sorted integer array and a target, determine if the target exists in the array in logarithmic time. If target exists in the array, the procedure should return the index of it.

Input: nums[] = [2, 3, 5, 7, 9], target = 7
Output: 3
Explanation: Element found at 4th (index 3) position

• If there are duplicate elements in the array, the procedure may return any index whose element is equal to the target.

Input: nums[] = [1, 2, 3, 4, 4, 5, 6, 7], target = 4
Output: 3 (or 4)
Explanation: Element found at the 4th (index 3) or 5th (index 4) position.

• If the target is not located, the procedure should return -1.

Input: nums[] = [1, 4, 5, 8, 9], target = 2
Output: -1

*/

#include <iostream>
#include <vector>
using namespace std;


class Solution
{
public:
	int findIndex(vector<int> const &nums, int target)
	{
		// Write your code here...
		// Write your code here...
		int i = 0;
        int j = nums.size() - 1;
        int result = -1;

        while(i <= j){
            if(nums[i] == target ){
                result = i;
                break;
            }
            else if(nums[j] == target){
                result = j;
                break;
            }
            else{
                i++;
                j--;
            }
        }
        return result;
	}
};


int main(){
    Solution obj;
    vector<int> v;
    int n(0), ele(0), target(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> ele;
        v.push_back(ele);
    }
    
    cout << obj.findIndex(v, target) << endl;
    return 0;
}