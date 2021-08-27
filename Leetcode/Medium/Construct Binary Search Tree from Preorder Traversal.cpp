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
    void solve(TreeNode *trav, int x){
        if(!trav)return;
        if(x>trav->val){
            if(trav->right)solve(trav->right, x);
            else trav->right = new TreeNode(x);
            return;
        }
        else{
            if(trav->left)solve(trav->left, x);
            else trav->left = new TreeNode(x);
            return;
        }
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode * root = new TreeNode(preorder[0]);
        TreeNode * ans = root;
        for(int i=1;i<preorder.size();i++)solve(root, preorder[i]);
        return ans;
    }
};
