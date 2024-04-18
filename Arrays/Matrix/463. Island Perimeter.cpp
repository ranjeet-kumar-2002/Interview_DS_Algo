#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<climits>
using namespace std;
    int m; int n;
    vector<vector<int>>dir = {{0,1},{0,-1},{1,0},{-1,0}};
    bool isvalid(vector<vector<int>>&grid,int newi,int newj){
         if(newi>=0 && newj>=0 && newi<m  && newj<n) return true;
         return false;
    }
    bool notvalid(vector<vector<int>>&grid,int newi,int newj){
         if(newi<0 || newj<0 || newi>=m || newj>=n) return true;
         return false;
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int ans = 0;
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                 if(grid[i][j]==1){
                     for(int d = 0;d<4;d++){
                         int newi = i+dir[d][0];
                         int newj = j+dir[d][1];
                         if(isvalid(grid,newi,newj)){
                             if(grid[newi][newj]==0) ans+=1;
                         }
                         if(notvalid(grid,newi,newj)){
                             ans +=1;
                         }
                     }
                 }
            }
        }
        return ans;
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


//**********************************Code by Crazy-Co************************************

#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<climits>
using namespace std;
    int neighbor(int i, int j, vector<vector<int>>& grid){
        int count=0;

        if(i-1>=0 && grid[i-1][j] == 1) count++;
        if(i+1<grid.size() && grid[i+1][j] == 1) count++;
        if(j-1>=0 && grid[i][j-1] == 1) count++;
        if(j+1<grid[0].size() && grid[i][j+1] == 1) count++;

        return count;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        // 3 + 3 + 0 + 3 + 2 + 3 + 2 
        int row = grid.size();
        int col = grid[0].size();
        int perimeter = 0;

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j] == 1){
                    perimeter += (4-neighbor(i,j,grid));
                }
            }
        }

        return perimeter;
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