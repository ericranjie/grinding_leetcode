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
    /** Recursive Solution:
      */
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
    
        Inorder(res, root);

        return res;
    }

    void Inorder(vector<int> &res, TreeNode* root) {
        if (!root) return;

        Inorder(res, root->left);
        res.push_back(root->val);
        Inorder(res, root->right);
    }
};