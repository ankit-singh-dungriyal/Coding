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
    void solve(TreeNode *trav, int val){
        if(!trav)return;
        if(val>trav->val){
            if(trav->right)solve(trav->right, val);
            else trav->right = new TreeNode(val);
            
        }
        else{
            if(trav->left)solve(trav->left, val);
            else trav->left = new TreeNode(val);
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            root = new TreeNode(val);
            return root;
        }
        solve(root,val);
        return root;
    }
};
