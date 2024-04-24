#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class Solution {
public:
    int f(int n,vector<int>&dp){
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        if(dp[n] !=-1) return dp[n];
        dp[n] = f(n-1,dp)+f(n-2,dp)+f(n-3,dp);
        return dp[n];
    }
    int tribonacci(int n) {
        vector<int>dp(n+1,-1);
        return f(n,dp);
    }
};

int main(){
     int n;
     cin>>n;
     Solution obj;
     cout<<obj.tribonacci(n)<<endl;
     return 0;
}
