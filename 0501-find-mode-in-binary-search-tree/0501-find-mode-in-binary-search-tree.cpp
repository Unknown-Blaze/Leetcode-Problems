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

    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> map;
        inorder(root, map);
        int max = INT_MIN;
        for (auto val : map){
            if (val.second > max){
                max = val.second;
            }
        }
        vector<int> ret;
        for (auto val : map){
            if (val.second == max){
                ret.push_back(val.first);
            }
        }
        return ret;
    }

    void inorder(TreeNode* root, unordered_map<int, int>& map){
        if (root == NULL) return;

        inorder(root->left, map);
        map[root->val]++;
        inorder(root->right, map);
    }
};