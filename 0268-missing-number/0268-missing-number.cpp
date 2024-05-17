class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0;

        for (auto num : nums){
            res ^= num;
        }
        for (int i = 0; i <= nums.size(); i++){
            res ^= i;
        }
        return res;
    }
};