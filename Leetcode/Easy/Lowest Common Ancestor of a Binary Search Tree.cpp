/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)return NULL;
        if(root==p||root==q)return root;
        TreeNode *a=lowestCommonAncestor(root->left,p,q);
        TreeNode *b=lowestCommonAncestor(root->right,p,q);
        if(a && b)return root;
        if(a)return a;
        return b;
    }
};
