class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int d = 0;
        for (int i = 1; i < nums.size(); i++){
            
            
            if (nums[i] == nums[i-1]){
                if (d) continue;
                d = 1;
            }else{
                d = 0;
            }
            nums[count++] = nums[i];
        }
        return count;
    }
};