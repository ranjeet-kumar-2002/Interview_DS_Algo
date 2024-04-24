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

*************************************************************************************
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

*******************************************************************************
class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        
        vector<int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        
        for (int i = 3; i <= n; ++i) {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
        
        return dp[n];
    }
};

********************************************************************************
class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        int a = 0;
        int b = 1;
        int c = 1;
        int ans;
        for (int i = 3; i <= n;i++) {
            ans  = a+b+c;
            a = b;
            b = c;
            c = ans;
        }
        
        return ans;
    }
};

