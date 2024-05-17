class Solution {
public:

    bool isSafe(vector<string> board, int x, int y){
        
        for (int i = 0; i < x; i++){
            if (board[i][y] == 'Q') return false;
        }
        for (int i = x, temp = y; i >= 0 && temp >= 0; i--, temp--){
            if (board[i][temp] == 'Q') return false;
        }
        for (int i = x, temp = y; temp < board.size() && i >= 0; i--, temp++){
            if (board[i][temp] == 'Q') return false;
        }
        return true;
    }

    void solve(vector<vector<string>>& sol, vector<string> board, int row, int n){
        if (row == n){
            sol.push_back(board);
            return;
        }

        for (int i = 0; i < n; i++){
            if (isSafe(board, row, i)){
                board[row][i] = 'Q';
                solve(sol, board, row+1, n);
                board[row][i] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board;
        string rows;
        vector<vector<string>> sol;
        for (int i = 0; i < n; i++){
            rows.push_back('.');
        }
        for (int j = 0; j < n; j++){
            board.push_back(rows);
        }

        solve(sol, board, 0, n);
        return sol;
    }
};