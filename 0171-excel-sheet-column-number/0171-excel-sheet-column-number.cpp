class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ret = 0;
        int n = columnTitle.size();
        for (int i = 0; i < n; i++){
            ret += (columnTitle[n-i-1] - 'A' + 1)*pow(26, i);
        }
        return ret;
    }
};