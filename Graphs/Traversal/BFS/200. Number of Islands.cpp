#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;
    int m;
    int n;
    vector<vector<int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool isvalid(vector<vector<char>>& grid, int i, int j) {
        if (i >= 0 && j >= 0 && i<m  && j<n) return true;
        return false;
    }
    void bfs(vector<vector<char>>& grid, int row, int col) {
        queue<pair<int, int>> q;
        q.push({row, col});
        while (!q.empty()) {
            auto p = q.front();q.pop();
            int i = p.first;
            int j = p.second;
            if(grid[i][j] == '1'){
            grid[i][j]='0';
            for (int d = 0; d < 4; d++) {
                int newi = i + dir[d][0];
                int newj = j + dir[d][1];
                if (isvalid(grid, newi, newj) && grid[newi][newj] == '1') {
                    q.push({newi, newj});
                }
            }
        }
      }
    }
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    bfs(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }

    int main(){
        int m,n;cin>>m>>n;
        vector<vector<char>>grid(m,vector<char>(n));
        for(int i =0;i<m;i++){
             for(int j =0;j<n;j++){
                cin>>grid[i][j];
             }
        }
        cout<<numIslands(grid)<<endl;
        return 0;
    }