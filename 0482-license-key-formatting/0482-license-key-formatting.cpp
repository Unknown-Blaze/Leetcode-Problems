class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int n = 0;
        int count = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] != '-') n++;
        }
        string ret = "";
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '-') {
                continue;
            }
            if ((count % k) == 0 && count > 0) ret += '-';
            ret += toupper(s[i]);
            count++;
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};