class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string ret = "";
        int i = num1.size()-1;
        int j = num2.size()-1;
        while (i >= 0 && j >= 0){
            char val = carry + num1[i] + num2[j] - '0';
            if (val <= '9'){
                ret += val;
                carry = 0;
            }else{
                ret += val-10;
                carry = 1;
            }
            i--;
            j--;
        }
        if (i >= 0){
            while (i >= 0){
                if (num1[i] == '9' && carry){
                    ret += '0';
                }else{
                    ret += num1[i] + carry;
                    carry = 0;
                }
                i--;
            }
        }
        if (j >= 0){
            while (j >= 0){
                if (num2[j] == '9' && carry){
                    ret += '0';
                }else{
                    ret += num2[j] + carry;
                    carry = 0;
                }
                j--;
            }
        }
        if (carry) ret += '1';


        reverse(ret.begin(), ret.end());
        return ret;
    }
};