class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> toPush;
        string curr;
        backtrack(ans, toPush, curr, s, 0);
        return ans;
    }

private:

    void backtrack(vector<vector<string>>& ans, vector<string>& toPush, string& curr, string s, int index){
        if (index >= s.size()) {
            ans.push_back(toPush);
        }
        
        for (int i = index; i < s.size(); i++){
            string curr = s.substr(index, i - index + 1);
            if (isPalindrome(curr)){
                toPush.push_back(curr);
                backtrack(ans, toPush, curr, s, i+1);
                toPush.pop_back();
            }
        }
        return;
    }


    bool isPalindrome(string s){
        if (s.size() == 1) return true;
        int n = s.size();
        int l = 0;
        int r = n-1;
        while (l < r){
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }
};