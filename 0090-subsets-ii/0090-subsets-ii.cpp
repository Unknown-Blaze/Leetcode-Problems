class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ret;
        vector<int> curr;
        sort(nums.begin(), nums.end());
        backtrack(ret, nums, curr, 0);
        return ret;
    }
    void backtrack(vector<vector<int>>& ans, vector<int>& nums, vector<int>& curr, int index){
        ans.push_back(curr);
        for (int i = index; i < nums.size(); i++){
            if (i > index && nums[i] == nums[i-1]) continue;
            curr.push_back(nums[i]);
            backtrack(ans, nums, curr, i+1);
            curr.pop_back();
        }
        return;
    }
};