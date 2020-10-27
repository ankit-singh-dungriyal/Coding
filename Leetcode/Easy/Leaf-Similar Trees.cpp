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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        solve(root1,v1);
        solve(root2,v2);
        return(v1==v2);
    }
    void solve(TreeNode *tmp,vector<int>&v){
        if(!tmp)return;
        if(!tmp->left && !tmp->right)v.push_back(tmp->val);
        solve(tmp->left,v);
        solve(tmp->right,v);
    }
};
