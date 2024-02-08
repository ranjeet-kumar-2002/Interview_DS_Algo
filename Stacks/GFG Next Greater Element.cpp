///////////// Next Greater Element/nearest element from the right////////////////////////////////////
///////////// Next Smallest Element/Nearest element from the right///////////////////////////////////
///////////// Next Smallest Element/Nearest element from the Left///////////////////////////////////
///////////// Next Greater Element/Nearest element from the Left///////////////////////////////////




///////////// Next Greater Element/nearest element from the right////////////////////////////////////
class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
      vector<long long> ans(n,-1);
      for(int i =0;i<n;i++){  //O(n^2) TLE
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
       for(int i =0;i<n;i++){  //O(n) and O(n)
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



class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
       vector<long long> ans(n,-1);
       stack<int>st;
       for(int i =0;i<n;i++){  //O(n)
             while( st.size()>0 && arr[st.top()]<arr[i]){
             ans[st.top()] = arr[i];
             st.pop();
            }
         st.push(i);
       }
       return ans;
    }
};

//////////////////////////////////////// Next Smallest Element/Nearest element from the right///////////////////////////////////

#include<bits/stdc++.h>
#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n){
     vector<int> ans(n,-1);
       stack<int>st;
       for(int i =0;i<n;i++){  //O(n)
             while( st.size()>0 && arr[st.top()]>arr[i]){
             ans[st.top()] = arr[i];
             st.pop();
         }
         st.push(i);
       }
       return ans;
}


/////////////////// Smallest number on left//////////////////////////////////////////////

class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
      vector<int> ans(n,-1);
      stack<int>st;
      for(int i =n-1;i>=0;i--){
          while(st.size()>0 && a[st.top()]>a[i]){
              ans[st.top()] = a[i];
              st.pop();
          }
          st.push(i);
      }
      return ans;
    }
};

/////////////////// Greater number on left //////////////////////////////////////////////

#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> leftGreater(int n, int a[]) { // Corrected function name to leftGreater
        vector<int> ans(n, -1); // Initialize answer vector with -1
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && a[st.top()] < a[i]) {
                ans[st.top()] = a[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};



