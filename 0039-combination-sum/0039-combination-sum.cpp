class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        generate(ans, candidates, curr, 0, target, 0);
        return ans;
    }

private:
    void generate(vector<vector<int>>& ans, vector<int>& candidates, vector<int>& curr, int currSum, int target, int start) {
        if (currSum == target) {
            ans.push_back(curr);
            return;
        }

        for (int i = start; i < candidates.size(); ++i) {
            if (currSum + candidates[i] <= target) {
                curr.push_back(candidates[i]);
                generate(ans, candidates, curr, currSum + candidates[i], target, i);
                curr.pop_back();
            }
        }
    }
};
