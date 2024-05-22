class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        vector<int> ret;
        for (int i = 0; i < nums2.size(); i++){
            map[nums2[i]]++;
        }
        for (int i = 0; i < nums1.size(); i++){
            if (map[nums1[i]]) {
                map[nums1[i]]--;
                ret.push_back(nums1[i]);
            }
        }
        return ret;
    }
};