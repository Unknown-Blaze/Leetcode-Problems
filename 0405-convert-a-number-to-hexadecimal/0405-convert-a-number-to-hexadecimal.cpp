class Solution {
public:

    char digits[16] {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    string toHex(int num) {
        if (num == 0) return "0";
        string ret = "";
        while (num && ret.size() < 8){
            ret += digits[(num & 0xf)];
            num >>= 4;
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};