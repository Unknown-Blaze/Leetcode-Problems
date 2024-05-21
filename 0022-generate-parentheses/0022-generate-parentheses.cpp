class Solution {
public:

    void generate(vector<string>& ans, int left, int right, string curr, int n){
        if (curr.size() == 2*n) {
            ans.push_back(curr);
            return;
        }
        
        if (left < n){
            generate(ans, left+1, right, curr+'(', n);
        }
        if (right < left){
            generate(ans, left, right+1, curr+')', n);
        }
        return;
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(ans, 0, 0, "", n);
        return ans;
    }
};