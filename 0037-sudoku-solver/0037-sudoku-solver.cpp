class Solution {
public:

    bool isSafe(vector<vector<char>>& board, int row, int col, char val) {

        for (int i = 0; i < 9; i++){
            if (board[i][col] != '.' && board[i][col] == val) return false;
            if (board[row][i] != '.' && board[row][i] == val) return false;
            int rowOfBox = 3 * (row/3) + i/3;
            int colOfBox = 3 * (col/3) + i%3; // Copied these two lines
            if(board[rowOfBox][colOfBox] != '.' && board[rowOfBox][colOfBox] == val) return false;
        }
        
        return true;
    }

    bool sudokuSolver(vector<vector<char>>& board, int row, int col){
        if (row == 9) return true;
        if (col == 9) {
            return sudokuSolver(board, row+1, 0);
        }
        if (board[row][col] != '.') {
            return sudokuSolver(board, row, col + 1);
        }

        for (int num = 1; num <= 9; num++){
            if (isSafe(board, row, col, num+'0')){
                board[row][col] = num+'0';
                if (sudokuSolver(board, row, col+1)) return true;
                board[row][col] = '.';
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        sudokuSolver(board, 0, 0);
    }
};