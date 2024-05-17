class Solution {
public:
    bool isSafe(vector<string> &board, int row, int col) {
    for (int y = 0; y < col; y++) {
            if (board[row][y] == 'Q') {
                return false;
            }
        }

        // Check top left diagonal
        for (int x = row, y = col; x >= 0 && y >= 0; x--, y--) {
            if (board[x][y] == 'Q') {
                return false;
            }
        }

        // Check bottom left diagonal
        for (int x = row, y = col; x < board.size() && y >= 0; x++, y--) {
            if (board[x][y] == 'Q') {
                return false;
            }
        }
        return true;
    }

    void solve(int &sol, vector<string> board, int col, int n) {
        if (col == n) {
            sol++;
            return;
        }

        for (int i = 0; i < n; i++) {
            if (isSafe(board, i, col)) {
                board[i][col] = 'Q';
                solve(sol, board, col + 1, n);
                board[i][col] = '.';
            }
        }
    }

    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        int sol = 0;

        solve(sol, board, 0, n);
        return sol;
    }
};
