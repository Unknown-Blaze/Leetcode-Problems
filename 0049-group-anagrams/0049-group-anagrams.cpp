class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> map;

        for (auto word : strs){
            string temp = word; 
            sort(temp.begin(), temp.end());
            map[temp].push_back(word);
        }
        vector<vector<string>> ret;
        for (auto& [key, value] : map){
            ret.push_back(value);
        }
        return ret;
    }
};