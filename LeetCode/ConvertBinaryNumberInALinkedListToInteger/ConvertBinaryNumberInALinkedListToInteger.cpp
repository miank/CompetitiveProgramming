// ConvertBinaryNumberInALinkedListToInteger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

struct ListNode 
{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	int getDecimalValue(ListNode* head) {

		vector<int> v;
		ListNode *temp = head;

		while (temp != nullptr)
		{
			v.push_back(temp->val);
			temp = temp->next;
		}

		int decimalNumber = 0;
		int base = 1;
		while (!v.empty())
		{
			int num = v.back();
			v.pop_back();
			decimalNumber += num * base;

			base = base * 2;
		}

		return decimalNumber;
	}
};