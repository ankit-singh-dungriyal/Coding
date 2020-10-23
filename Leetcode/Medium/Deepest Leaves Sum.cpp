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
    int deepestLeavesSum(TreeNode* root) {
        int h=height(root);
        sumofleaves(root,h);
        return sum;
    }
    int height(TreeNode *root){
        if(!root)return 0;
        return 1+max(height(root->left),height(root->right));
    }
    void sumofleaves(TreeNode *root,int h){
        if(!root)return;
        if(h==1)sum+=root->val;
        sumofleaves(root->right,h-1);
        sumofleaves(root->left,h-1);
    }
};
