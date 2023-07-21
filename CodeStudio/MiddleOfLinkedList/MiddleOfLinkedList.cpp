// MiddleOfLinkedList.cpp

#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node * findMiddle(Node * head) {
    // Write your code here
    Node* slow = head, * fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}


