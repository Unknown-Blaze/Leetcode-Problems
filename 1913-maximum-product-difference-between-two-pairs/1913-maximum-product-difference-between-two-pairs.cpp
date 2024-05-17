class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        int min1 = nums[0] < nums[1] ? nums[0] : nums[1];
        int min2 = nums[1] < nums[0] ? nums[0] : nums[1];
        int max1 = min2;
        int max2 = min1;
        
        for (int i = 2; i < nums.size(); i++){
            if (nums[i] > max1){
                max2 = max1;
                max1 = nums[i];
            }else if (nums[i] > max2){
                max2 = nums[i];
            }

            if (nums[i] < min1){
                min2 = min1;
                min1 = nums[i];
            }else if (nums[i] < min2){
                min2 = nums[i];
            }
        }

        return max1*max2 - min1*min2;
    }
};