class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if (word.size() > board.size()*board[0].size()) return false;

        for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board[0].size(); j++){
                if (backtrack(board, word, "", i, j, 0)) return true;
            }
        }
        return false;
    }

private:
    
    int lr[4] = { -1, 1, 0, 0 };
    int ud[4] = { 0, 0, -1, 1 };
    
    bool backtrack(vector<vector<char>>& board, string word, string curr, int row, int col, int index){
        if (index == word.size()){
            return true;
        }
        if (row < 0 || col < 0 || row >= board.size() || col >= board[0].size() || board[row][col] != word[index]) {
            return false;
        }

        for (int i = 0; i < 4; i++) {
            char t = board[row][col];
            board[row][col] = '.';
            bool ans = backtrack(board, word, curr + t, row + lr[i], col + ud[i], index + 1);
            board[row][col] = t;
            if (ans == true) {
                return ans; 
            }
        }
        return false;
    }
};