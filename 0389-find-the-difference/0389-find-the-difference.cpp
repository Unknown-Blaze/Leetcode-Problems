class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> map;
        for (int i = 0; i < s.size(); i++){
            map[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++){
            if (!map[t[i]]) return t[i];
            else map[t[i]]--;
        }
        return ' ';
    }
};