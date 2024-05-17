class Solution {
public:
    bool isPowerOfFour(int n) {
        return log(n)/log(4) == floor(log(n)/log(4)) && n;
    }
};