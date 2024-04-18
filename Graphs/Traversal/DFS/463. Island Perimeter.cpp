#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<climits>
using namespace std;
    int m; 
    int n;
    vector<vector<int>>dir = {{0,1},{0,-1},{1,0},{-1,0}};
    void dfs(vector<vector<int>>&grid,int i,int j, int &peri){
         if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0) {
             peri++; 
             return;
         }
         if(grid[i][j]==-1) return;
         grid[i][j]=-1;
         for(int d = 0;d<4;d++){
            int newi = i+dir[d][0];
            int newj = j+dir[d][1];
            dfs(grid,newi,newj,peri);
         }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int peri = 0;
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(grid[i][j]==1){
                    dfs(grid,i,j,peri);
                    return peri;
                }
            }
        }
        return -1;
    }
int main(){
     int m,n;cin>>m>>n;
     vector<vector<int>>grid(m,vector<int>(n));
     for(int i =0;i<m;i++){
         for(int j =0;j<n;j++){
              cin>>grid[i][j];
         }
     }
     cout<<islandPerimeter(grid)<<endl;
}
