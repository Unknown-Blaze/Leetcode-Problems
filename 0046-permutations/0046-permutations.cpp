class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> ans;
        vector<bool> used(nums.size(), false); 
        generate(ans, nums, curr, used);
        return ans;
    }

private:
    void generate(vector<vector<int>>& ans, vector<int>& nums, vector<int>& curr, vector<bool>& used) {
        if (curr.size() == nums.size()) {
            ans.push_back(curr);
            return;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (!used[i]) {
                curr.push_back(nums[i]);
                used[i] = true;
                generate(ans, nums, curr, used);
                curr.pop_back();
                used[i] = false;
            }
        }
    }
};
