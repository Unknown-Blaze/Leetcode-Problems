class Solution {
public:
    
    int addSquares(int n){
        int ret = 0;
        while (n != 0){
            int u = n % 10;
            ret += u*u;
            n /= 10;
        }
        return ret;
    }
    
    bool isHappy(int n) {
        if (n == 1) return true;
        int slow = n;
        int fast = addSquares(n);
        while (slow != fast){
            slow = addSquares(slow);
            fast = addSquares(addSquares(fast));
            if (slow == 1 || fast == 1) return true;
        }
        return false;
    }
};