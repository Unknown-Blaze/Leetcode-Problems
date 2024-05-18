class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret;
        for (int i = 0; i < numRows; i++){
            vector<int> l;
            for (int j = 0; j <= i; j++){
                if (j == 0 || j == i) l.push_back(1);
                else l.push_back(ret[i-1][j] + ret[i-1][j-1]);
            }
            ret.push_back(l);
        }
        return ret;
    }
};