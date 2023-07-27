// QueueOperations.cpp 

#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>
using namespace std;

class Solution {
public:
	// Function to insert element into the queue
	// Function to insert element into the queue
	unordered_map<int, int>mp;
	void insert(queue<int> &q, int k) {
		// Your code here
		q.push(k);
		mp[k]++;
	}

	// Function to find frequency of an element
	// return the frequency of k
	int findFrequency(queue<int> &q, int k) {
		// Your code here
		if (mp.find(k) != mp.end()) {
			return mp[k];
		}
		return -1;
	}
};

int main()
{
	return 0;
}

