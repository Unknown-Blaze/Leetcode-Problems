class Solution {
public:
    string convert(string s, int numRows) {
        if (s.size() <= 2 || numRows == 1) return s;
        string ret = "";
        int dir = 1;
        int index = 0;
        vector<string> str(numRows);
        for (int i = 0; i < s.size(); i++){
            if (index == 0){
                dir = 1;
            }else if (index == numRows-1){
                dir = -1;
            }
            str[index] += s[i];
            index += dir;
        }

        for (auto val : str){
            ret += val;
        }
        return ret;
    }
};