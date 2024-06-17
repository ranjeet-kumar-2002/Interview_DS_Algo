// O(N^3) sp O(N^2) + recusive stack
//1289. Minimum Falling Path Sum II
class Solution {
public:
    int solve(int col,vector<vector<int>>&grid,int row, vector<vector<int>>&dp){
         int ans  = INT_MAX;
        int n = grid.size();
        int sum =  grid[row][col];
         if(row == n-1) {
            return sum;
         }
         if(dp[row][col] !=-1) return dp[row][col];
         for(int j = 0;j<n;j++){
            if(j!=col){
                 ans = min(ans,sum+solve(j,grid,row+1,dp));
            }
         }
         return dp[row][col] = ans;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n  = grid.size();
        int ans = INT_MAX;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int c = 0;c<n;c++){
            ans = min(ans,solve(c,grid,0,dp));
        }
        return ans;
    }
};
