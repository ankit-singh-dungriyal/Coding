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
        if(root == p||root==q|| !root)return root;
        TreeNode * par1=lowestCommonAncestor(root->left,p,q);
        TreeNode * par2=lowestCommonAncestor(root->right,p,q);
        
        if(par1 && par2)return root;
        if(par1)return par1;
        return par2;

    }
};
