class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n && floor(log2(n)) == log2(n));
    }
};