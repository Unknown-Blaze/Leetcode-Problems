class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m = 0;
        int count = 0;
        for (auto val : nums){
            if (val) count++;
            else {
                if (count > m){
                    m = count;
                }
                count = 0;
            }
        }
        return max(m, count);
    }
};