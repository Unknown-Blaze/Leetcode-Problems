class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        if (words.size() == 1) return {};

        unordered_map<char, int> temp;
        
        for (int i = 0; i < words[0].size(); i++){
            temp[words[0][i]]++;
        }
        
        for (int i = 1; i < words.size(); i++){
            unordered_map<char, int> curr;
            for (int j = 0; j < words[i].size(); j++){
                curr[words[i][j]]++;
            }
            for (auto &kv : temp){
                if (curr.find(kv.first) != curr.end()){
                    kv.second = min(curr[kv.first], kv.second);
                }else{
                    kv.second = 0;
                }
            }
        }
        
        vector<string> ret;
        for (auto &kv : temp){
            for (int i = 0; i < kv.second; i++){
                ret.push_back(string() + kv.first);
            }
        }
        return ret;
    }
};