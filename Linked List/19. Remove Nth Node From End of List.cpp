//19. Remove Nth Node From End of List
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            count++;
        }
    
        count = count-n;
        if(count==0) return head->next;
        ListNode*  prev = NULL;
        temp = head;
        while(count--){
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete temp;
        return head;
    }
};
