// using extra space 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>temp;
        ListNode* curr = head;
        while(curr){
            temp.push_back(curr->val);
            curr = curr->next;
        }
        vector<int>x;
        for(int i =temp.size()-1;i>=0;i--){
            x.push_back(temp[i]);
        }
        return temp==x;
    }
};
// using extra space but little optimize
**********************************************

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>temp;
        ListNode* curr = head;
        while(curr){
            temp.push_back(curr->val);
            curr = curr->next;
        }
        int i = 0;
        int j = temp.size()-1;
        while(i<=j){
             if(temp[i]!=temp[j]) return false;
             i++;
             j--;
        }
        return true;
    }
};
******************************************
   // using reverse and midlle 
    
class Solution {
public:
    ListNode* reverse(ListNode* head){
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
         ListNode* prev = NULL;
         ListNode* curr = head;
         ListNode* Next = curr->next;
         while(Next){
             curr->next = prev;
             prev  = curr;
             curr = Next;
             Next = Next->next;
         }
         curr->next = prev;
         return curr;
    }
    bool isPalindrome(ListNode* head) {
       if(head==NULL) return true;
       if(head->next==NULL) return true; 
       ListNode* slow = head; 
       ListNode* fast = head;
       ListNode* prev = NULL;
       // finding midlle pointer
        while( slow && fast && fast->next){
          // optional --> slow && fast && fast->next
          prev = slow;
          slow = slow->next;
          fast = fast->next->next;
       } 
       prev->next = NULL;
       ListNode* rev = reverse(slow);
       while(head && rev){
          if(head->val !=rev->val) return false;
          head = head->next;
          rev = rev->next;
       }
       return true;
    }
};

************************************************************
// using reverse wtihout making reverse function separately
class Solution {
public:
    bool isPalindrome(ListNode* head) {
       if(head==NULL) return true;
       if(head->next==NULL) return true; 
       ListNode* slow  = head; 
       ListNode* fast  = head; 
       ListNode* prev  = NULL; 
       ListNode* Next =  slow->next;

       while(fast && fast->next){
          fast = fast->next->next; 
          slow->next = prev;
          prev = slow;
          slow = Next;
          Next = Next->next;
       } 

       if(fast) { // for odd case ll
          slow = slow->next;
       }
       // now we can compare the slow and prev 
       while(slow && prev){
         if(slow->val !=prev->val) return false;
         slow = slow->next;
         prev = prev->next;
       }
       return true;
    }
};


//*******************************************************

// using recursion

class Solution {
public:
    ListNode* curr;
    bool f(ListNode* head){
         if(head==NULL){
             return true;
         }
        bool ans = f(head->next);
        if(head->val !=curr->val) return false;
        curr = curr->next;
        return ans;
    }
    bool isPalindrome(ListNode* head) {
       if(head==NULL) return true;
       if(head->next==NULL) return true; 
       curr=head;
       return f(head);
    }
};
