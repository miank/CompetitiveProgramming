#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<int> arr, int n){
	long long maxSum = INT_MIN;

	long long currSum = 0;

	for(int i = 0; i < n;i++){
		currSum += arr[i];

		if(currSum < 0){
			currSum = 0;
		}

		if(currSum > maxSum){
			maxSum = currSum;
		}
	}

	return maxSum;
}

int main() {

	// Write your code here
	int n(0);
	cin >> n;

	vector<int> v(n);

	for(int i = 0; i < n; i++){
		cin >> v[i];
	}

	long long ans = maxSubarraySum(v, n);

	cout << ans << endl;
}


