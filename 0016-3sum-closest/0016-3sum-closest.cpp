class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());
        vector<int> vals;
        int sum = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.size(); i++){
            int start = i+1, end = nums.size()-1;
            int t = target - nums[i];

            while(start < end){
                if (abs(sum-target) > abs(nums[start] + nums[end] - t)) {
                        sum = nums[start] + nums[end] + nums[i];
                    }
                if (nums[start] + nums[end] < t){
                    start++;
                }else if (nums[start] + nums[end] > t){  
                    end--;
                }else{
                    return target;
                }
            }
        }
        return sum;
    }
};