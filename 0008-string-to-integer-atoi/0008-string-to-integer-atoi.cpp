class Solution {
public:
    int myAtoi(string s) {
        
        int sign = 1;
        int i = 0;
        int n = s.size();
        while(s[i] == ' '){i++;}
        if (i == s.size()) return 0;

        if (s[i] == '-' || s[i] == '+') {
            if (s[i] == '-') sign = -1;
            i++;
        }

        long num = 0;
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');
            if (sign == 1 && num > INT_MAX) {
                return INT_MAX;
            }
            if (sign == -1 && -num < INT_MIN) {
                return INT_MIN;
            }
            i++;
        }
        
        return sign*num;
    }
};