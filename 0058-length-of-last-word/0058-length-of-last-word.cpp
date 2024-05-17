class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = 0;
        for (i; i < s.length(); i++){
            if (s[s.length()-(i+1)] != ' ')
                break;
        }
        int count = 0;
        for (i; i < s.length(); i++){
            if (s[s.length()-(i+1)] == ' ')
                break;
            count++;
        }
        return count;
    }
};