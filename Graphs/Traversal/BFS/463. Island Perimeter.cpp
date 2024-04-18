#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<climits>
using namespace std;
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int peri = 0;
        queue<pair<int,int>>q;
        vector<vector<int>>dir = {{0,1},{0,-1},{1,0},{-1,0}};
        bool flag = false;
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(grid[i][j]==1){
                    q.push({i,j});
                    flag = true;
                    break;
                }
            }
            if(flag==true) break;
        }
        while(!q.empty()){
             auto top = q.front(); q.pop();
             int i = top.first;
             int j = top.second;
             if(grid[i][j]==1){
             grid[i][j]=-1;
             for(int d = 0;d<4;d++){
                 int newi = i+dir[d][0]; //{{0,1},{0,-1},{1,0},{-1,0}};
                 int newj = j+dir[d][1];
                 if(newi<0 || newj<0 || newi>=m || newj>=n || grid[newi][newj]==0) {
                    peri++;
                 }
                    else if(grid[newi][newj]==1) q.push({newi,newj});
             }
            }
        }
        return peri;
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
