
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = nullptr;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = nullptr;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node* deleteMiddle(Node* head){
    // Write your code here.
    Node* slow = head;

    Node* fast = head;

    Node* prev = nullptr;

    while(fast != nullptr && fast->next != nullptr){

        prev = slow;

        slow = slow->next;

        fast = fast->next->next;

    }

    if(prev != nullptr)
        prev->next = slow->next;
    else 
        head = head->next;

    delete slow;

    return head;



    
}
