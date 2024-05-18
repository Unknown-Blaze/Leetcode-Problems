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
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        return dfsSum(root, sum, targetSum);
    }

    bool dfsSum(TreeNode* root, int sum, int targetSum){
        if (root == NULL) return false;
        sum += root->val;
        if (root->right == NULL && root->left == NULL) return sum == targetSum;

        return dfsSum(root->left, sum, targetSum) || dfsSum(root->right, sum, targetSum);
    }
};