class Solution {
public:
    int hammingWeight(int n) {
        int ans = 0;
        int val = n;
        int p = floor(log2(val));
        for (int i = p; i >= 0; i--){
            if (n >= pow(2, i)){
                ans++;
                n = n - pow(2, i);
            }
        }
        return ans;
    }
};