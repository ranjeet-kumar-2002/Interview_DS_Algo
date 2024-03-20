
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* t1 = list1; 
        ListNode* t2 = list1;
        a--;
        while(a--){
             t1 = t1->next;
        } 
        while(b--){
             t2 = t2->next;
        } 
         ListNode* t3 = list2;
         while(t3->next){
             t3 = t3->next;
         }
        t1->next = list2;
        t3->next = t2->next;
        t2->next = NULL; //optional
        return list1;
    }
};


class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
       vector<int>temp;
       ListNode* t1 = list1; 
        while(a--){
             temp.push_back(t1->val);
             t1 = t1->next;
        } 
        while(list2){
            temp.push_back(list2->val);
            list2 = list2->next;
        }
        t1 = list1;
        b++;
        while(b--){
         t1=t1->next;
        } 
        while(t1){
            temp.push_back(t1->val);
            t1= t1->next;
        }
      ListNode* head = new ListNode(-1);
      ListNode* temp1 = head;
      for(int i = 0;i<temp.size();i++){
         temp1->next = new ListNode(temp[i]);
         temp1 = temp1->next;
      }    
       return head->next;
    }
};
