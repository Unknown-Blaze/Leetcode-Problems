class Solution {
public:
    int trap(const vector<int>& height) {
        if (height.size() <= 1) return 0;

        int n = height.size();
        vector<int> maxl(n), maxr(n);

        maxl[0] = height[0];
        for (int i = 1; i < n; ++i) {
            maxl[i] = max(maxl[i - 1], height[i]);
        }

        maxr[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            maxr[i] = max(maxr[i + 1], height[i]);
        }

        int total = 0;
        for (int i = 0; i < n; ++i) {
            total += max(min(maxl[i], maxr[i]) - height[i], 0);
        }

        return total;
    }
};