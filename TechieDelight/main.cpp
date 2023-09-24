#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	int findIndex(vector<int> const &nums, int target)
	{
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
    
    cin >> target;

    Solution obj;
    cout << obj.findIndex(v, target) << endl;

    return 0;

}