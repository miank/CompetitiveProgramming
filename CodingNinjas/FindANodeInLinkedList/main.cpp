
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

int findNode(Node *head, int n)
{
    // Write your code here.
    Node *temp = head;
    int index = -1;
    int cnt = 0;
    while (temp != nullptr)
    {
        if (temp->data == n)
        {
            index = cnt;
            break;
        }
        cnt++;
        temp = temp->next;
    }

    return index;
}