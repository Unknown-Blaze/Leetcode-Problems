class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> curr;
        generate(ans, curr, n, k, 1);
        return ans;
    }

private:
    void generate(vector<vector<int>>& ans, vector<int>& curr, int n, int k, int now){
        if (curr.size() == k) {
            ans.push_back(curr);
            return;
        }
        for (int i = now; i <= n; i++){

            curr.push_back(i);
            generate(ans, curr, n, k, i+1);
            curr.pop_back();
            
        }
        return;
    }

};