class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> map;

        for (auto num : nums){
            map[num]++;
        }
        for (auto i = map.begin(); i != map.end(); i++){
            if (i->second == 1) return i->first;
        }
        return -1;
    }
};