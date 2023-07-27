// IntersectionOfTwoLinkedList.cpp 

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int val)
	{
		data = val;
		next = NULL;
	}
};

class Solution {
public:
	Node* findIntersection(Node* head1, Node* head2)
	{
		// code here
		// return the head of intersection list
		unordered_set<int> s;
		Node* temp1 = head1, *temp2 = head2, *ans = new Node(0);
		Node* head = ans;
		while (temp2 != NULL)
		{
			s.insert(temp2->data);
			temp2 = temp2->next;
		}
		while (temp1 != NULL)
		{
			if (s.find(temp1->data) != s.end())
			{
				// Creating a new linkedlist.
				Node* t = new Node(temp1->data);
				ans->next = t;
				ans = ans->next;
			}
			temp1 = temp1->next;
		}
		head = head->next; // ??
		return head;
	}
};


