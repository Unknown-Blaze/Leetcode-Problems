/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void invert(struct TreeNode* root){
    typedef struct TreeNode BTNode;
    if (root == NULL) return;
    BTNode* temp = root->left;
    root->left = root->right;
    root->right = temp;
    invert(root->left);
    invert(root->right);
}
struct TreeNode* invertTree(struct TreeNode* root){
    typedef struct TreeNode BTNode;
    invert(root);
    return root;    
}