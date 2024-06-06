class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ret(nums.size(), 1);
        int prod = 1;

        for (int i = 0; i < nums.size(); i++){
            ret[i] = prod;
            prod *= nums[i];
        }
        prod = 1;
        for (int i = nums.size()-1; i >= 0; i--){
            ret[i] *= prod;
            prod *= nums[i];
        }
        return ret;
    }
};