class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        if (nums.size() == 1) return vector<string>{to_string(nums[0])};

        vector<string> ret;
        int flag = 0;
        int l = 0;
        int r = 0;
        for (int i = 0; i < nums.size(); i++){

            if ((i == nums.size()-1 || nums[i] != nums[i+1]-1) && flag == 1){
                ret.push_back(to_string(l)+"->"+to_string(nums[i]));
                flag = 0;
            }else if (i == nums.size()-1){
                ret.push_back(to_string(nums[i]));
            }else if (nums[i] != nums[i+1]-1 && flag == 0){
                ret.push_back(to_string(nums[i]));
            }else if (nums[i] == nums[i+1]-1 && flag == 0){
                l = nums[i];
                flag = 1;
            }
        }
        return ret;
    }
};