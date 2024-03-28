*********************************************************************** full code************************
#include <iostream>
#include<vector>
#include <queue>
#include<cmath>
using namespace std;
long long ans(vector<int>&arr,int k){
     priority_queue<int>pq;
     for(auto &x:arr) pq.push(x);
     while(k--){
          int top = pq.top();pq.pop();
          pq.push(sqrt(top));
     }
     long long ans = 0;
     while(!pq.empty()){
          ans +=pq.top();pq.pop();
     }
     return ans;
}
int main() {
  int n,k;
  cin>>n>>k;
  vector<int>arr(n);
  for(int i =0;i<n;i++){
      cin>>arr[i];
  }
  cout<<ans(arr,k);
  return 0;
}

//gifts = [25,64,9,4,100], k = 4 output = 29

*********************** 2558. Take Gifts From the Richest Pile**********************************

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        for(auto &x:gifts) pq.push(x);
        while(k--){
              int top = pq.top();pq.pop();
              pq.push(sqrt(top));
        }
        long long ans = 0;
        while(!pq.empty()){
             ans +=pq.top();pq.pop();
        }
        return ans;
    }
};

