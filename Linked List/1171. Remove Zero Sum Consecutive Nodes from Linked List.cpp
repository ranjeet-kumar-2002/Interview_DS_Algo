//1171. Remove Zero Sum Consecutive Nodes from Linked List
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
          ListNode* dummy = new ListNode(0);
          dummy->next = head;
          ListNode* curr = dummy;
          while(curr !=NULL){
             int sum = 0;
             ListNode* temp = curr->next;
             while(temp !=NULL){
                sum +=temp->val;
                if(sum==0){
                    curr->next = temp->next;
                }
                     temp = temp->next;
             }
             curr = curr->next;
          }
          return dummy->next;
    }
};
