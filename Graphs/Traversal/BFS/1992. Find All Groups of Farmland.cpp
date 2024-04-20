// Input: land = [[1,0,0],[0,1,1],[0,1,1]]
// Output: [[0,0,0,0],[1,1,2,2]]

// Input: land = [[1,1],[1,1]]
// Output: [[0,0,1,1]]

#include<iostream>
#include<vector>
#include<queue>
#include<climits>
#include<cmath>
using namespace std;
// m x n  binary matrix where 0 == forested and 1 farmland
    vector<vector<int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool isvalid(vector<vector<int>>& land, int newi, int newj, int m, int n) {
        if (newi >= 0 && newj >= 0 && m > newi && n > newj)
            return true;
        return false;
    }
    vector<int> bfs(vector<vector<int>>& land, int row, int col, int m, int n) {
            queue<pair<int, int>> q;
            q.push({row, col});
            land[row][col] = 0;
            int minRow = row, minCol = col, maxRow = row, maxCol = col;
            while (!q.empty()) {
                   auto p = q.front();
                   q.pop();
                   int i = p.first;
                   int j = p.second;
                   minRow = min(i,minRow);
                   maxRow = max(i,maxRow);
                   minCol = min(j,minCol);
                   maxCol = max(j,maxCol);
                   for(int d = 0;d<4;d++){
                     int newi = i+dir[d][0];
                     int newj = j+dir[d][1];
                     if(isvalid(land,newi,newj,m,n) && land[newi][newj]==1){
                         q.push({newi,newj});
                         land[newi][newj]=0;
                     }
                   }
            }
            return {minRow,minCol,maxRow,maxCol};
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m = land.size();
        int n = land[0].size();
        vector<vector<int>> ans;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (land[i][j] == 1) {
                    vector<int>temp = bfs(land,i,j,m,n);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }

int main(){
     int m ,n;
     cin>>m>>n;
     vector<vector<int>>land(m,vector<int>(n));
     for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            cin>>land[i][j];
        }
     }
     vector<vector<int>> ans = findFarmland(land);
        for(int i =0;i<ans.size();i++){
        for(int j =0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
     }

     return 0;
}


****************************************************************************


class Solution {
public:
    bool isvalid(vector<vector<int>>& land, int newi, int newj, int m, int n) {
        if (newi >= 0 && newj >= 0 && m > newi && n > newj)
            return true;
        return false;
    }
    void bfs(vector<vector<int>>& land, int row, int col, int m, int n ,int &maxRow,int &maxCol) {
            vector<vector<int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
            queue<pair<int, int>> q;
            q.push({row, col});
            land[row][col] = 0;
            while (!q.empty()) {
                   auto p = q.front();
                   q.pop();
                   int i = p.first;
                   int j = p.second;
                   maxRow = max(i,maxRow);
                   maxCol = max(j,maxCol);
                   for(int d = 0;d<4;d++){
                     int newi = i+dir[d][0];
                     int newj = j+dir[d][1];
                     if(isvalid(land,newi,newj,m,n) && land[newi][newj]==1){
                         q.push({newi,newj});
                         land[newi][newj]=0;
                     }
                   }
            }
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m = land.size();
        int n = land[0].size();
        vector<vector<int>> ans;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (land[i][j] == 1) {
                    int maxRow = 0;
                    int maxCol = 0;
                    bfs(land,i,j,m,n,maxRow,maxCol);
                    ans.push_back({i,j,maxRow,maxCol});
                }
            }
        }
        return ans;
    }
};

