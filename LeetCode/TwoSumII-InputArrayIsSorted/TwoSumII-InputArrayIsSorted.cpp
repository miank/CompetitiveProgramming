// TwoSumII-InputArrayIsSorted.cpp 

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		int i = 0, j = numbers.size() - 1;
		while (i < j) {
			int sum = numbers[i] + numbers[j];
			if (sum == target) 
				return { i + 1,j + 1 };
			else if (sum > target) 
				j--;
			else 
				i++;
		}
		return {};
	}
};


int main()
{
	vector<int> v{ 2, 7, 11, 15 };
	int target;
	cin >> target;
	vector<int> v1;

	Solution obj;
	v1 = obj.twoSum(v, target);


}
