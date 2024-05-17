class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set <int> set;
        vector<int> res = {-1};
        for (int i = 0; i < nums.size(); i++){
            set.insert(nums[i]);
            if (set.find(-1*nums[i]) != set.end()){
                res.push_back(abs(nums[i]));
            }
        }
        return *max_element(res.begin(), res.end());
    }
};