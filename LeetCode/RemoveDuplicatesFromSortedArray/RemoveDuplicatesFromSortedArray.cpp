// RemoveDuplicatesFromSortedArray.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int removeDuplicates(vector<int>& nums) 
{
	int count = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            // If the current element is equal to the next element, we skip
            if (i < nums.size() - 1 && nums[i] == nums[i + 1]) {
                continue;
            }
            // We will update the array in place
            nums[count] = nums[i];
            count++;
        }
        return count;

}

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

	int num = removeDuplicates(v);
	cout << num << endl;

	return 0;
}
