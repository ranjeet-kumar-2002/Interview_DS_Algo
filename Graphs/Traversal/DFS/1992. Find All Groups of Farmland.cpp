********************using DFS O(m*n) spO(1)******************************

class Solution {
public:
    bool isvalid(vector<vector<int>>& land, int newi, int newj, int m, int n) {
        if (newi >= 0 && newj >= 0 && m > newi && n > newj)
            return true;
        return false;
    }
   void dfs(vector<vector<int>>&land,int i,int j,int &maxRow,int &maxCol,int m,int n,vector<vector<int>> &dir){
     land[i][j] = 0;
     maxRow = max(i,maxRow);
     maxCol = max(j,maxCol);
     for(int d  = 0;d<4;d++){
         int newi = i+dir[d][0];
         int newj = j+dir[d][1];
         if(isvalid(land,newi,newj,m,n) && land[newi][newj]==1){
             dfs(land,newi,newj,maxRow,maxCol,m,n,dir);
         }
     }
   }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m = land.size();
        int n = land[0].size();
        vector<vector<int>> ans;
        vector<vector<int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (land[i][j] == 1) {
                    int maxRow = 0;
                    int maxCol = 0;
                    dfs(land,i,j,maxRow,maxCol,m,n,dir);
                    ans.push_back({i,j,maxRow,maxCol});
                }
            }
        }
        return ans;
    }
};
