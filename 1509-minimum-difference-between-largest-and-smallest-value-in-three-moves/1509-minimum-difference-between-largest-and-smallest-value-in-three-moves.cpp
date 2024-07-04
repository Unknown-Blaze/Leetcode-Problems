class Solution {
public:
    int minDifference(vector<int>& nums) {
        
        if (nums.size() <= 4) return 0;

        int n = nums.size();
        sort(nums.begin(), nums.end());

        int ret = INT_MAX;
        for (int i = 0; i < 4; i++){
            ret = min(ret, abs(nums[n-1-i]-nums[3-i]));
        }
        return ret;

    }
};