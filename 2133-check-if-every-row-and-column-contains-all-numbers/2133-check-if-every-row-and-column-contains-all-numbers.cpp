class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_set<int> set_row;
        unordered_set<int> set_col;
        for (int i = 0; i < matrix.size(); i++){
            set_row.clear();
            set_col.clear();
            for (int j = 0; j < matrix[0].size(); j++){
                if (set_row.count(matrix[i][j])) return false;
                if (set_col.count(matrix[j][i])) return false;
                set_row.insert(matrix[i][j]);
                set_col.insert(matrix[j][i]);
            }
        }
        return true;
    }
};