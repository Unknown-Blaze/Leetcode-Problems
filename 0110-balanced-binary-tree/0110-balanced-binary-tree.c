/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
typedef struct TreeNode BTNode; 
int height (BTNode* root){
    if (root == NULL) return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return 1 + (leftHeight > rightHeight ? (leftHeight) : (rightHeight)); 
}

bool isBalanced(struct TreeNode* root){
    if (root == NULL) return 1;
    int heightR = height(root->right);
    int heightL = height(root->left);
    if (heightL - heightR > 1 || heightR - heightL > 1){
        return 0;
    }
    int balancedR = isBalanced(root->right);
    int balancedL = isBalanced(root->left);
    
    if (!balancedR || !balancedL) return 0;
    return 1;
}