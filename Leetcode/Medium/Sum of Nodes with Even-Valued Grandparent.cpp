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
    int sum=0;
    int sumEvenGrandparent(TreeNode* root) {
        solve(root,NULL,NULL);
        return sum;
    }
    void solve(TreeNode* root,TreeNode *grp,TreeNode* p){
        if(!root)return;
        if(grp && grp->val%2==0)sum+=root->val;
        solve(root->left,p,root);
        solve(root->right,p,root);
    }
};
