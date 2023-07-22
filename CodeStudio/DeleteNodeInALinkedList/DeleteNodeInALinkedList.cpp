// DeleteNodeInALinkedList.cpp 

#include <iostream>

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T>* next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void deleteNode(LinkedListNode<int> *node) {
    // Write your code here.
    node->data = node->next->data;
    node->next = node->next->next;
}

int main()
{
    std::cout << "Hello World!\n";
}

