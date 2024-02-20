************************************ using extra space********************************************
  //O(n^2) O(n)
class Solution{
public:
    void Reverse(stack<int> &St){
      if(St.empty()) return;  // basecase
      int top = St.top(); St.pop(); 
      Reverse(St);  // recursion call
      stack<int>temp;
      while(!St.empty()){
          temp.push(St.top()); St.pop(); 
      }
      St.push(top);  // push the top element into bolltom 
      while(!temp.empty()){
          St.push(temp.top()); temp.pop();
      }
      
    }
};

***************************************************************************88
//Approach-2 (Using O(1) Auxiliary Space)
//Simply write a story like recursion and trust it
//Time : O(n^2)
//Space : O(1) Auxiliary Space
class Solution{
public:

    void insertAtBottom(stack<int>& St, int element) {
        if(St.empty()) {
            St.push(element);
            return;
        }
        
        int cur_top_el = St.top();
        St.pop();
        insertAtBottom(St, element);
        St.push(cur_top_el);
    }

    void Reverse(stack<int> &St){
        if(St.empty()) {
            return;
        }
        int top = St.top();
        St.pop();
        
        Reverse(St);
        insertAtBottom(St, top);
    }
};
