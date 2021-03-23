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
    unordered_map<TreeNode*,int>m;
public:
    
    int solve(TreeNode *trav){
        if(!trav)return 0;
        int ans=trav->val;
        if(m[trav])return m[trav];
        ans=max(ans,solve(trav->left)+solve(trav->right));
        if(trav->left && trav->right){
            ans=max(ans,trav->val
                    +solve(trav->left->left)+solve(trav->left->right)
                   +solve(trav->right->left)+solve(trav->right->right));
        }
        if(trav->left){
            ans=max(ans,trav->val+solve(trav->left->left)+solve(trav->left->right));
            ans=max(ans,solve(trav->left->left)+solve(trav->left->right)+solve(trav->right));
        }
        if(trav->right){
            ans=max(ans,trav->val+solve(trav->right->left)+solve(trav->right->right));
            ans=max(ans,solve(trav->right->left)+solve(trav->right->right)+solve(trav->left));            
        }
        m[trav]=ans;
        return m[trav];
    }
    
    
    int rob(TreeNode* root) {
        return solve(root);
    }
};
