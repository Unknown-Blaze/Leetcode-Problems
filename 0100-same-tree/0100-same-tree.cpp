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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> inp;
        vector<int> prep;
        vector<int> inq;
        vector<int> preq;
        inorder(p, inp);
        inorder(q, inq);
        preorder(p, prep);
        preorder(q, preq);
        for (auto i : inp)
            cout << i;
        cout << endl;
        for (auto i : inq)
            cout << i;
        cout << endl;
        for (auto i : prep)
            cout << i;
        cout << endl;
        for (auto i : preq)
            cout << i;
        cout << endl;
        if (inp.size() != inq.size() || prep.size() != preq.size()) return false;
        // for (int i = 0; i < inp.size(); i++){
        //     if 
        // }
        if (inp == inq && prep == preq) return true;
        return false;
    }
    void inorder(TreeNode* root, vector<int>& list){
        if (root == NULL) {
            list.push_back(-1);
            return;
        }

        inorder(root->left, list);
        list.push_back(root->val);
        inorder(root->right, list);
    }

    void preorder(TreeNode* root, vector<int>& list){
        if (root == NULL) {
            list.push_back(-1);
            return;
        }

        list.push_back(root->val);
        preorder(root->left, list);
        preorder(root->right, list);
    }

};