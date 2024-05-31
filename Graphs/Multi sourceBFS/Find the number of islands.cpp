#include<iostream>
#include<vector>
#include<queue>
#include<string>
using namespace std;
    vector<vector<int>>dir = {{0,1},{1,0},{-1,0},{0,-1},{-1,1},{1,1},{-1,-1},{1,-1}};
    void bfs(int row,int col,vector<vector<char>>& grid){
           queue<pair<int,int>>q;
           q.push({row,col});
           grid[row][col]='0';
           while(!q.empty()){
                auto x = q.front();q.pop();
                int i = x.first;
                int j = x.second;
                for(int d = 0;d<8;d++){
                int newi = i+dir[d][0]; 
                int newj = j+dir[d][1]; 
                if(newi>=0 && newj>=0 && newi<grid.size() && newj<grid[0].size() && grid[newi][newj]=='1'){
                     grid[newi][newj]='0';
                     q.push({newi,newj});
                 }
                 
              }
           }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for(int i = 0;i<m;i++){
            for(int j =0;j<n;j++){
                 if(grid[i][j]=='1'){
                    bfs(i,j,grid);
                     ans++;
                 }
            }
        }
        return ans;
    }
int main(){
    int m,n;cin>>m>>n;
    vector<vector<char>>grid(m,vector<int>(n));
    for(int i = 0;i<m;i++){
        for(int j =0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    cout<<numIslands(grid);
    return 0;
}
