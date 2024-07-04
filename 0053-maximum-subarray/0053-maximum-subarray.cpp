class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = INT_MIN;
        int curr = 0;

        for (int i = 0; i < nums.size(); i++){
            curr = max(nums[i], nums[i] + curr);
            m = max(m, curr);
        }
        return m;
    }
};