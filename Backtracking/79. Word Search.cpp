class Solution {
public:
    int m;
    int n;
    vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};
    bool find(int i,int j ,int indx,string &word , vector<vector<char>>& board){
         if(indx == word.size()) return true;
         if(i<0 || i>=m || j<0 || j>=n || board[i][j] =='$') return false;
         if(board[i][j] !=word[indx]) return false;
         char temp = board[i][j];
         board[i][j] = '$';
         for(int d = 0;d<4;d++){
             int newi = i+dir[d][0];
             int newj = j+dir[d][1];
             if(find(newi,newj,indx+1,word,board)) return true;
         }
        board[i][j] = temp;
        return false;

    }
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        for(int i =0;i<m;i++){
             for(int j = 0;j<n;j++){
                 if(board[i][j]==word[0] && find(i,j,0,word,board)) return true;
             }
        }
        return false;
    }
};

***********************************************************************************************


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int m, n;
vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};

bool find(int i, int j, int indx, string &word, vector<vector<char>>& board) {
    if(indx == word.size()) return true;
    if(i<0 || i>=m || j<0 || j>=n || board[i][j] =='$') return false;
    if(board[i][j] !=word[indx]) return false;
    char temp = board[i][j];
    board[i][j] = '$';
    for(int d = 0; d<4; d++) {
        int newi = i + dir[d][0];
        int newj = j + dir[d][1];
        if(find(newi, newj, indx + 1, word, board)) return true;
    }
    board[i][j] = temp;
    return false;
}

bool exist(vector<vector<char>>& board, string word) {
    m = board.size();
    n = board[0].size();
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(board[i][j] == word[0] && find(i, j, 0, word, board))
                return true;
        }
    }
    return false;
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns for the board: ";
    cin >> rows >> cols;
    vector<vector<char>> board(rows, vector<char>(cols));
    cout << "Enter the elements of the board matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> board[i][j];
        }
    }
    // Consume newline character after entering rows and cols
    cin.ignore();
    string word;
    cout << "Enter the word to search: ";
    // Read the word using getline to handle spaces in the word
    getline(cin, word);
    cout << exist(board, word);
    return 0;
}
