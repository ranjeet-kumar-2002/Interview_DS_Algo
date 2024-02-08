#include<bits/stdc++.h>
#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n){
     vector<int> ans(n,-1);
       stack<int>st;
       for(int i =0;i<n;i++){  //O(n^2)
             while( st.size()>0 && arr[st.top()]>arr[i]){
             ans[st.top()] = arr[i];
             st.pop();
         }
         st.push(i);
       }
       return ans;
}
