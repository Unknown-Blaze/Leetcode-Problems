class Solution {
public:
    string addBinary(string a, string b) {

        int i = a.size()-1;
        int j = b.size()-1;
        int carry = 0;
        string ret = "";
        int val;
        while (i >= 0 || j >= 0){
            val = 0;
            if (i >= 0){
                val += a[i--] - '0';
            }
            if (j >= 0){
                val += b[j--] - '0';
            }
            
            if (val+carry >= 2) {
                ret += to_string(val + carry - 2);
                carry = 1;
            }
            else {
                ret += to_string(val + carry);
                carry = 0;
            }
        }
        if (carry) ret += '1';
        reverse(ret.begin(), ret.end());
        return ret;
    }
};