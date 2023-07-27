// CloneAStackWithoutUsingExtraSpace.cpp 

#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
	void clonestack(stack<int> st, stack<int>& cloned)
	{
		//code here
		cloned = st;
	}
};

// Different approach also can be looked for. But this approach was easy and new