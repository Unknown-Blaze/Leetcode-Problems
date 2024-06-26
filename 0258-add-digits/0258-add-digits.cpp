class Solution {
public:
    
    int add(int num){
        int ans = 0;
        while(num != 0){
            ans += num % 10;
            num /= 10;
        }
        return ans;
    }    
    
    int addDigits(int num) {
        if (num/10 == 0) return num;
        int mid = add(num);
        while (mid/10 != 0){
            mid = add(mid);
        }
        return mid;
    }
};