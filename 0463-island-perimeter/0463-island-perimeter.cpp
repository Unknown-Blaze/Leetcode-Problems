class Solution {
public:

    int perimeter(vector<vector<int>>& grid, int n, int m, int row, int col){
        int ret = 0;
        if (row == 0 || grid[row-1][col] == 0) ret++;
        if (col == 0 || grid[row][col-1] == 0) ret++;

        if (row == n-1 || grid[row+1][col] == 0) ret++;
        if (col == m-1 || grid[row][col+1] == 0) ret++;
        return ret;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (grid[i][j] == 0) continue;
                ans += perimeter(grid, n, m, i, j);
            }
        }
        return ans;
    }
};