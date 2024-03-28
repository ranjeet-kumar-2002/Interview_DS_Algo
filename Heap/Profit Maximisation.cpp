

**********************Profit Maximisation interviewbit******************************
int Solution::solve(vector<int> &A, int B) {
    priority_queue<int>pq;
    for(auto &x:A) pq.push(x);
    int ans = 0;
    while(B--){
         int top = pq.top();
         pq.pop();
         ans +=top;
         top = top-1;
         pq.push(top);
    }
    return ans;
}

***********************************************************************************
#include<iostream>
#include<vector>
#include<queue>
#include<cmath>

using namespace std;
int ProfitMaximisation(vector<int>&A,int B){
     int ans = 0;
     priority_queue<int>pq;
     for(auto &x:A) pq.push(x);
     while(B--){
          int top = pq.top();pq.pop();
          ans +=top;
          top =top-1;
          pq.push(top);
     }
     return ans;
}
int main(){
      int n,B;
      cin>>n>>B;
      vector<int>A(n);
      for(int i = 0;i<n;i++){
           cin>>A[i];
      }
      cout<<ProfitMaximisation(A,B);
     return 0;
}

// Example Input
// Input 1:
// A = [2, 3]
// B = 3
// output :7
// Input 2:
// A = [1, 4]
// B = 2
// output:7
