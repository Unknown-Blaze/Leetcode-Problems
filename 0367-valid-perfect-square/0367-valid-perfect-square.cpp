class Solution {
public:
    bool isPerfectSquare(int num) {
        int b = 1;
        int t = num < 46340 ? num : 46340; // sqrt(2147483647) = 46340.... (can never be greater than 46340)
        int m;

        while (b <= t){
            m = b + (t-b)/2;
            if (m*m < num){
                b = m+1;
            }else if (m*m > num){
                t = m-1;
            }else return true;
        }
        return false;
    }
};