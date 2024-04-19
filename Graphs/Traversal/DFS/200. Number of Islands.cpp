#include<iostream>
#include<vector>
#include<string>
using namespace std;
    int m;int n;
    vector<vector<int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool isvalid(vector<vector<char>>& grid,int i,int j){
        if(i>=0 && j>=0 && m>i && n>j) return true;
        return false;
    }
    void dfs(vector<vector<char>>& grid, int i, int j) {
        if (i < 0 || j < 0 || i >= m || j >= n)
            return;
        if(grid[i][j]=='0') return;
        grid[i][j] = '0';
        for (int d = 0; d < 4; d++) { //{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
            int newi = i + dir[d][0];
            int newj = j + dir[d][1];
            if(isvalid(grid,newi,newj) && grid[newi][newj]=='1'){
                  dfs(grid, newi, newj);
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
                    dfs(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }
int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<char>> grid(m, vector<char>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    cout << numIslands(grid) << endl;
    return 0;
}
// Input: grid = [
//   ["1","1","0","0","0"],
//   ["1","1","0","0","0"],
//   ["0","0","1","0","0"],
//   ["0","0","0","1","1"]
// ]