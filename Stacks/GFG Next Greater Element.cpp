class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
      vector<long long> ans(n,-1);
      for(int i =0;i<n;i++){  //O(n^2)
          for(int j =i+1;j<n;j++){  
              if(arr[j]>arr[i]){
                  ans[i] = arr[j]; break;
              }
          }
      }
      return ans;
    }
};



class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
       vector<long long> ans(n,-1);
       stack<int>st;
       for(int i =0;i<n;i++){  //O(n^2)
         if(st.size()>0 && arr[st.top()]<arr[i] ){
             while( st.size()>0 && arr[st.top()]<arr[i]){
             ans[st.top()] = arr[i];
             st.pop();
         }
      }
         st.push(i);
       }
       return ans;
    }
};
