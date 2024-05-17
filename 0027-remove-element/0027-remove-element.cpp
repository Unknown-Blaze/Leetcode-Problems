class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for (auto i : nums){
            if (val != i){
                nums[count] = i;
                count++;
            }
        }
        return count;
    }
};