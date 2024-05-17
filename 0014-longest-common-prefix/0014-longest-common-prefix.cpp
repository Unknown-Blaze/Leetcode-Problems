class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret = "";
        int size = 200;
        int index = 0;

        for (int i = 0; i < strs.size(); i++){
            if (strs[i].size() < size) {
                size = strs[i].size(); 
                index = i;
            }
        }

        for (int i = 0; i < size; i++){
            for (int j = 0; j < strs.size(); j++){
                if (j == 0) {
                    ret += strs[j][i];
                    continue;
                }
                if (strs[j][i] != ret[i]) return ret.substr(0, i);
            }
        }
        return strs[index];
    }
};