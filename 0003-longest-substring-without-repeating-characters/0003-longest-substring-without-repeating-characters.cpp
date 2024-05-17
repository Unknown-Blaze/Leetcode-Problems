class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if (s.size() <= 1) return s.size();

        unordered_map<char, int> map;
        int max = 0;
        for (int i = 0; i < s.size(); i++){
            if (map.find(s[i]) != map.end()){
                if (map.size() > max) max = map.size();
                i = map[s[i]];
                map.clear();
            }else{
                map[s[i]] = i;
            }
        }
        if (map.size() > max) return map.size();
        else return max;
    }
};