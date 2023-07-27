// NumberOfStudentsDoingHomeworkAtAGivenTime.cpp

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime)
	{
		int cnt = 0;
		for (int i = 0; i < startTime.size(); i++)
		{
			if (startTime[i] <= queryTime && queryTime <= endTime[i])
			{
				cnt++;
			}
		}
		return cnt;
	}
};

int main()
{
	Solution obj;
	vector<int> start, end;
	int queryTime(0), ele(0), n(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		start.push_back(ele);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		end.push_back(ele);
	}
	cin >> queryTime;
	int result = obj.busyStudent(start, end, queryTime);
	cout << result << endl;
	return 0;
}

