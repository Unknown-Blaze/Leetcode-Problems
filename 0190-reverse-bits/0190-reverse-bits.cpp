class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret = 0;
        string s = bitset<32>(n).to_string();
        cout << s;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '1'){
                ret += pow(2, i);
            }
        }
        return ret;
    }
};