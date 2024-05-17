class Solution {
public:
    bool isUgly(int n) {

        if (n == 0) return false;
        
        while (n != 1){
            if (n/2.0 == floor(n/2)) {
                n/=2;
                continue;
            }
            if (n/3.0 == floor(n/3)) {
                n/=3;
                continue;
            }
            if (n/5.0 == floor(n/5)) {
                n/=5;
                continue;
            }
            break;
        }
        if (n == 1) return true;
        return false;
    }

};