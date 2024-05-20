class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_set<char> set;

        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if (board[i][j] != '.' && set.find(board[i][j]) != set.end()) return false;
                set.insert(board[i][j]);
            }
            set.clear();
        }
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if (board[j][i] != '.' && set.find(board[j][i]) != set.end()) return false;
                set.insert(board[j][i]);
            }
            set.clear();
        }
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                for (int k = 0; k < 3; k++){
                    for (int l = 0; l < 3; l++){
                        if (board[3*i + k][3*j + l] != '.' && set.find(board[3*i + k][3*j + l]) != set.end()) return false;
                        set.insert(board[3*i + k][3*j + l]);
                    }
                }
                set.clear();
            }
        }
        return true;
    }
};