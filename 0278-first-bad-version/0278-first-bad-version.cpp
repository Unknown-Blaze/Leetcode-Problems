// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long m;
        long b = 1;
        long t = n;
        int ret = n;
        while (b <= t){
            m = b + (t-b)/2;
            if (isBadVersion(m)){
                t = m-1;
                ret = m;
            }else{
                b = m+1;
            }
        }
        return ret;
    }
};