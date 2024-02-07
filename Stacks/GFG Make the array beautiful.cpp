class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
       stack<int>st;
       for(int i =0;i<arr.size();i++){
           if(st.empty()) st.push(arr[i]);
           else if(arr[i]>=0){
               if(st.top()>=0) st.push(arr[i]);
               else st.pop();
           }else if(arr[i]<0){
               if(st.top()<0) st.push(arr[i]);
               else st.pop();
           }
           
       }
       int n = st.size();
       int i =n-1;
        vector<int>ans(n);
       while(!st.empty()){
           ans[i] = st.top(); st.pop();
           i--;
       }
       
       return ans;
    }
};
