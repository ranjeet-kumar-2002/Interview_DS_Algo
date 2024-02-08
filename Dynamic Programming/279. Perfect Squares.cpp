class Solution {
public:
    vector<int>dp;
    int f(int n){
        if(n==0) return 0;
        int ans = INT_MAX;
        if(dp[n] !=-1) return dp[n];
        for(int i =1;i<=sqrt(n);i++){
            int recusiveAns = 1+f(n-i*i);
            ans = min(ans,recusiveAns);
        }
        return dp[n] = ans;
    }
    int numSquares(int n) {
        dp.resize(n+1,-1);
        return f(n);
    }
};
