class Solution {
public:
    int arrangeCoins(int n) {
        int ret = 0;
        int i = 0;
        while (n >= 0) {
            n -= (++i);
            ret++;
        }
        return ret-1;
    }
};