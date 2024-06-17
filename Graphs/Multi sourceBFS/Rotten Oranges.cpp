#include<iostream>
#include<queue>
#include<vector>
using namespace std;
    vector<vector<int>>dir = {{0,1},{1,0},{-1,0},{0,-1}};
    int ans = 0;
    void bfs(vector<vector<int>>& grid,queue<pair<int,int>>&q){
         while(!q.empty()){
                  int size = q.size();
                  for(int k = 0;k<size;k++){
                  auto x = q.front();q.pop();
                  int i = x.first;
                  int j = x.second;
                  for(int d = 0;d<4;d++){
                      int newi = i+dir[d][0];
                      int newj = j+dir[d][1];
                      if(newi>=0 && newj>=0 && newi<grid.size() && newj<grid[0].size() && grid[newi][newj]==1){
                         grid[newi][newj]=2;
                         q.push({newi,newj});
                      }
                  }
             }
             ans++;
         }
         
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>>q;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        bfs(grid,q);
        for(int i = 0;i<m;i++){
            for(int j =0;j<n;j++){
                if(grid[i][j]==1) return -1;
            }
        }
           int count = 0;
           for(int i = 0;i<m;i++){
            for(int j =0;j<n;j++){
                if(grid[i][j]==0) count++;
            }
        }
        if(count == m*n) return 0;
        
        return ans-1;
    }
int main(){
    int m,n;cin>>m>>n;
    vector<vector<int>>adj(m,vector<int>(n));
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            cin>>adj[i][j];
        }
    }
    cout<<orangesRotting(adj);
    return 0;
}
