// TwoSum.cpp 

#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> twoSum(vector<int>& arr, int target, int n)
{
	// Write your code here. 
    vector<pair<int, int>> vp;
    
    int left = 0, right = int(arr.size()) - 1, tempSum;
    while (left < right)
    {
        tempSum = arr[left] + arr[right];
        if (tempSum == target)
        {
            vp.push_back(make_pair(arr[left], arr[right]));
        }
        if (tempSum > target)
            right--;
        else
            left++;
    }
    if (vp.empty()) {
        vp.push_back(make_pair(-1, -1));
    }
    return vp;
}



int main()
{
	int n(0), target(0), ele(0);
	vector<int> v;

	cin >> n >> target;

    for (int i = 0; i < n; i++) {
        cin >> ele;
        v.push_back(ele);
    }

	vector<pair<int, int>> vp;

	vp = twoSum(v, target, n);
	return 0;
}

