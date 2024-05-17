class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return 0;
        }else{
            int num = x;
            long int reverse = 0;
            int digit;
            while(x > 0){
                digit = x%10;
                reverse = reverse*10 + digit;
                x /= 10;
            }
            return num == reverse;
        }
    }
};