class Solution {
public:
    int hammingDistance(int x, int y) {
        int xor_val = x^y;

        int count = 0;

        while (xor_val != 0){
            count += xor_val&1;
            xor_val >>= 1;
        } 
        return count;

    }
};