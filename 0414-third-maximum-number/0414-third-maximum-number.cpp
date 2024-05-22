class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        if (s.size() < 3) return *max_element(s.begin(), s.end());
        if (s.size() == 3) return *min_element(s.begin(), s.end());
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max3 = INT_MIN;
        for (auto val : s){
            if (val > max1) max1 = val;
        }
        for (auto val : s){
            if (val > max2 && val < max1) max2 = val;
        }
        for (auto val : s){
            if (val > max3 && val < max2) max3 = val;
        }
        return max3;
    }
};