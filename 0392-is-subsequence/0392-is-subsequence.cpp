class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() > t.size()) return false;
        if (s == "") return true;

        int count = 0;
        int max = s.size();
        for (int i = 0; i < t.size(); i++){
            if (s[count] == t[i]) {
                if (++count == max) return true;
            }
        }
        return false;
    }
};