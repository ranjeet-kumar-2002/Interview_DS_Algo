//70. Climbing Stairs
class Solution {
public:
    vector<int>dp;
    int f(int n){
      if(n<0) return 0;
      if(n==0) return 1;
      if(dp[n] !=-1) return dp[n];
      int one_step = f(n-1);
      int two_step = f(n-2);
      return dp[n] = one_step+two_step;
    }
    int climbStairs(int n) {
      dp.resize(n+1,-1);
        return f(n);
    }
};

class Solution {
public:
    int f(int n,vector<int>&dp){
        if(n<0) return 0;
        if(n==0) return 1;
        if(n==1) return 1;
        if(n==2) return 2;
        if(n==3) return 3;
        if(dp[n] !=-1) return dp[n];
        return dp[n] = f(n-1,dp)+f(n-2,dp);
    }
    int climbStairs(int n) {
       vector<int>dp(n+1,-1);
       return f(n,dp);
    }
};


class Solution {
public:
    int solve(int n,vector<int> &dp){
        if(n<=2)
            return n;
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i =3;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2];
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};


class Solution {
public:
    int solve(int n){
        if(n<=2)
            return n;
        int prev1=2;
        int prev2=1;
        int curr;
        for(int i =3;i<=n;i++){
            curr=prev2+prev1;
            prev2=prev1;
            prev1=curr;
        }     
        return curr;
    }
    int climbStairs(int n) {
        return solve(n);
    }
};



class Solution {
public:
    int solve(int n,vector<int>&dp){
        if(n<=2)  return n;
            if(dp[n] !=-1) return dp[n];
        dp[n] = solve(n-1,dp)+solve(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        if(n<=2) return n;
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};

