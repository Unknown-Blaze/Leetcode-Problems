class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string> ans;
        string curr;
        backtrack(ans, s, wordDict, curr, 0);
        return ans;
    }
    void backtrack(vector<string>& ans, string& s, vector<string>& wordDict, string& curr, int index){
        if (index == s.size()){
            ans.push_back(curr);
            return;
        }

        for (int i = index; i < s.size(); i++){
            string word = s.substr(index, i - index + 1);
            if (wordInDict(word, wordDict)){
                string temp = curr;
                if (temp.size() == 0) temp = word;
                else temp += " " + word;
                backtrack(ans, s, wordDict, temp, i+1);
            }
        }
    }

    bool wordInDict(string word, vector<string>& wordDict){
        
        for (auto val : wordDict){
            if (word == val) {
                return true;
            }
        }
        return false;
    }
};