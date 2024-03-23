//143. Reorder List
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL) return;
        if(head->next==NULL) return;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while(fast && fast->next){
              prev = slow;
              slow = slow->next;
              fast = fast->next->next;
        }
         prev->next= NULL;
         ListNode* temp = head;
         temp=temp->next;
         vector<int>temp1;
         vector<int>temp2;
         while(temp){
             temp1.push_back(temp->val);
             temp = temp->next;
         }

         while(slow){
             temp2.push_back(slow->val);
             slow = slow->next;
         }
         reverse(temp2.begin(),temp2.end());
         head->next = NULL;
         int j = 0;
         for(int i =0;i<temp2.size();i++){
             head->next = new ListNode(temp2[i]);
             head = head->next;
             if(j<temp1.size()){
                 head->next = new ListNode(temp1[j]);
                 j++;
                 head = head->next;
             }
         } 
    }
};
