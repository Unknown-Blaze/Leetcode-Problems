class Solution {
public:
    int firstUniqChar(string s) {
        int charset[26] = {0};

        for (auto i : s){
            charset[i - 'a']++;
        }

        for (int i = 0; i < s.size(); i++){
            if (charset[s[i] - 'a'] == 1) return i;
        }
        return -1;

    }
};