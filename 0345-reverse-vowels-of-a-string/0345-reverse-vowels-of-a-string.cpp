class Solution {
public:
    string reverseVowels(string s) {
        int l = 0;
        int r = s.size()-1;
        int stopl = 0;
        int stopr = 0;
        while (l < r){
            if (isVowel(s[l])) stopl = 1;
            if (isVowel(s[r])) stopr = 1;

            if (stopl && stopr) {
                char temp = s[l];
                s[l] = s[r];
                s[r] = temp;
                stopl = 0;
                stopr = 0;
            }

            if (!stopl) l++;
            if (!stopr) r--;
        }
        
        return s;
    }

    bool isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};