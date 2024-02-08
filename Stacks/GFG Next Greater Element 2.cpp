***********************GFG Next Greater Element Circular array given******************************
class Solution {
  public:
    vector<int> nextGreaterElement(int N, vector<int>& arr) {
       vector<int>tempAns(2*N,-1);
       vector<int>temp = arr;
       stack<int>st;
       for(auto &x:arr) temp.push_back(x);
       for(int i =0;i<temp.size();i++){
           while(st.size()>0 && temp[st.top()]<temp[i]){
               tempAns[st.top()] =temp[i];
               st.pop();
           }
           st.push(i);
       }
       vector<int>ans;
       for(int i = 0;i<N;i++){
           ans.push_back(tempAns[i]);
       }
       return ans;
    }
};
