// RemoveDuplicatesFromAnUnsortedLinkedList.cpp 

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node * removeDuplicates(Node * head)
{
    // Write your code here
    unordered_set<int> s;
    Node* curr = head;

    if (curr == nullptr) {
        return head;
    }
    else {
        s.insert(curr->data);
    }

    while (curr != nullptr && curr->next != nullptr)
    {
        if (s.find(curr->next->data) != s.end()) {
            curr->next = curr->next->next;
        }
        else {
            s.insert(curr->next->data);
            curr = curr->next;
        }
    }

    return head;
}

int main()
{
    std::cout << "Hello World!\n";
}
