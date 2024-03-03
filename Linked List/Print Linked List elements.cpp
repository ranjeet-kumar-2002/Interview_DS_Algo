//Print Linked List elements


class Solution
{
    public:
    void display(Node *head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    }
};
