class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> boolArray(nums.size(), false);
        vector<int> ret;
        for (int i = 0; i < nums.size(); i++){
            boolArray[nums[i]-1] = true;
        }
        for (int i = 0; i < boolArray.size(); i++){
            if (!boolArray[i]) ret.push_back(i+1);
        }
        return ret;
    }
};