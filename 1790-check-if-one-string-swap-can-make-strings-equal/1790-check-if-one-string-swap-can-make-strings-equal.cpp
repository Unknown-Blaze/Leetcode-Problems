class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        char c1 = '\0';
        char c2 = '\0';
        char c3 = '\0';
        char c4 = '\0';
        int count = 0;
        if (s1 == s2) return true;
        for (int i = 0; i < s1.size(); i++){
            if (s1[i] != s2[i]){
                count++;
                if (c1 != '\0') {
                    c2 = s1[i];
                    c4 = s2[i];
                }else{
                    c1 = s1[i];
                    c3 = s2[i];
                }
            }
        }
        if (count != 2) return false;
        if (c1 == c4 && c2 == c3) return true;
        return false;
    }
};