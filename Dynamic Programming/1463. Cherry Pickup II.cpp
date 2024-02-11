class Solution {
public:
    vector<vector<vector<int>>>dp;
    int solve(vector<vector<int>>&grid,int row,int col1,int col2){
        if(row>=grid.size()) return 0;
        if(dp[row][col1][col2] !=-1) return dp[row][col1][col2];
        int cherry = grid[row][col1]+(col1!=col2 ? grid[row][col2]:0);
        int ans = 0;
        for(int i = -1;i<=1;i++){
            for(int j = -1;j<=1;j++){
                int newr = row+1;
                int newc1 = i+col1;
                int newc2 = j+col2;
                if(newc1>=0 && newc2 >=0 && newc1<grid[0].size() && newc2<grid[0].size()){
                   ans = max(ans, solve(grid,row+1,newc1,newc2));
                }
            }
        }
         dp[row][col1][col2] = cherry+ans;
         return  dp[row][col1][col2];
    }
    int cherryPickup(vector<vector<int>>& grid) {
        dp.resize(71,vector<vector<int>>(71,vector<int>(71,-1)));
        return solve(grid,0,0,grid[0].size()-1);
    }
};
