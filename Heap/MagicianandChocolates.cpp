*************************MagicianandChocolates interviewbit****************************************
#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;
int mod = 1e9+7;
int MagicianandChocolates(vector<int>&B,int A){
     priority_queue<long long>pq;
     for(auto &x:B) pq.push(x);
     long long ans  = 0;
     while(A--){
          long long top = pq.top();pq.pop();
          ans +=top;
          pq.push(top/2);
     }
     return ans%mod;
}
int main(){
     int n;cin>>n;
     int A;cin>>A;
     vector<int>B(n);
     for(int i =0;i<n;i++){
          cin>>B[i];
     }
     cout<<MagicianandChocolates(B,A);
     return 0;
}

//  A = 5
//  b = [2, 4, 6, 8, 10]
//  output = 33
//Magician and Chocolates

******************************************************************************
int mod = 1e9+7;
int Solution::nchoc(int A, vector<int> &B) {
    priority_queue<long long >pq;
    long long ans = 0;
    for(auto &x:B) pq.push(x);
    while(A--){
         long long top = pq.top();pq.pop();
         ans+=top;
         pq.push(top/2);
    }
    return ans%mod;
}

