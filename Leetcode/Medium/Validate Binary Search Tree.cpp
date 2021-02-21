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
    
    bool solve(TreeNode *trav,long long mn,long long mx){
        if(!trav)return true;
        if(trav->val<=mn||trav->val>=mx)return false;
        return (solve(trav->left,mn,trav->val) && solve(trav->right,trav->val,mx));
    }
    bool isValidBST(TreeNode* root) {
        return solve(root,-100000000007,100000000007);
    }
};
