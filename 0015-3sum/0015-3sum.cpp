class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;
        set<vector<int>> set;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); i++){
            int start = i+1, end = nums.size() - 1;
            int target = -nums[i];
            while (start < end){
                if (i == end || nums[start] + nums[end] > target) end--;
                else if (i == start || nums[start] + nums[end] < target) start++;
                else {
                    set.insert({nums[start], nums[end], nums[i]});
                    start++;
                    end--;
                }
            }
        }
        for(auto i : set){
            ans.push_back(i);
        }
        return ans;
        

    }
};