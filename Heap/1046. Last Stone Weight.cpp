#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;
int LastStoneWeight(vector<int>&stones){
     priority_queue<int>pq;
     for(auto &x:stones)pq.push(x);
     while(pq.size()>1){
          int x = pq.top();pq.pop();
          int y = pq.top();pq.pop();
          if(x!=y) pq.push(abs(y-x));
     }
     if(pq.size()>0) return pq.top();
     return 0;
}
int main(){
      int n;
      cin>>n;
      vector<int>stones(n);
      for(int i =0;i<n;i++){
           cin>>stones[i];
      }
      cout<<LastStoneWeight(stones);
     return 0;
}

// stones = [2,7,4,1,8,1] output =1
*******************************************************
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto &x:stones) pq.push(x);
        while(pq.size()>1){
             int x = pq.top();pq.pop();
             int y = pq.top();pq.pop();
             if(x!=y) pq.push(abs(y-x));
        }
        if(pq.size()>0) return pq.top();
        return 0;
    }
};
