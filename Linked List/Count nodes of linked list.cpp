//Count nodes of linked list


class Solution
{
    public:
    int getCount(struct Node* head){
      Node* temp = head;
      int count = 0;
      while(temp){
          count++;
          temp=temp->next;
      }
      return count;
    
    }
};
