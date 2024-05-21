/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string curr = "";
        if (root)
            getPaths(ans, curr, root);
        return ans;
        
    }
    
    void getPaths(vector<string>& ans, string curr, TreeNode* root){
        if (root->left == NULL && root->right == NULL) {
            curr += to_string(root->val);
            ans.push_back(curr);
        }
        curr += to_string(root->val);
        if (root->right != NULL) getPaths(ans, curr+"->", root->right);
        if (root->left != NULL) getPaths(ans, curr+"->", root->left);

    }
};