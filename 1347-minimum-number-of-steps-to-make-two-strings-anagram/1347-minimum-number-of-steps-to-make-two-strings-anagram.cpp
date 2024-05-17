class Solution {
public:
    int minSteps(string s, string t) {
        int alpha[26] = {0};
        int ret = 0;
        for (int i = 0; i < s.size(); i++){
            alpha[s[i] - 'a']++;
            alpha[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++){
            ret += max(0, alpha[i]);
        }
        return ret;
    }
};