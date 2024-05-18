class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int b = 0;
        int size = nums.size();
        int t = size-1;
        int m = (b+t)/2;

        if (target <= nums[b]) return 0;
        if (target > nums[t]) return size;

        while (t-b != 1){
            if (target > nums[m]) {
                b = m;
            }else{
                t = m;
            }
            m = (b+t)/2;
        }
        return b+1;
    }
};