//931. Minimum Falling Path Sum

class Solution {
public:
    int n;
    int solve(int row,int col,vector<vector<int>>& matrix, vector<vector<int>>&dp){
        if(row==n-1) return matrix[row][col];
        if(dp[row][col] !=-1) return dp[row][col];
        int sum = matrix[row][col];
        int mini =INT_MAX;
       if(row+1<n && col-1>=0){
            mini =  min(mini,sum+solve(row+1,col-1,matrix,dp));
       }
      if(row+1<n){
            mini = min(mini,sum+solve(row+1,col,matrix,dp));
      }
       if(row+1<n && col+1<n){
            mini = min(mini, sum+solve(row+1,col+1,matrix,dp));
       }
       return dp[row][col] = mini;
       
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        n = matrix.size();
        if(matrix[0][0] == 0 && matrix[n-1][n-1]==0) return -1;
        int row = 0;
        int minisum = INT_MAX;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        for(int col =0;col<n;col++){
           minisum = min(minisum, solve(row,col,matrix,dp));
        }
        return minisum;
    }
};
