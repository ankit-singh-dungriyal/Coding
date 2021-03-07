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
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        vector<TreeNode*>v;
        if(!root)return ans;
        v.push_back(root);
        while(!v.empty()){
            TreeNode *tmp=v.back();
            ans.push_back(tmp->val);
            v.pop_back();
            if(tmp->right)v.push_back(tmp->right);
            if(tmp->left)v.push_back(tmp->left);
        }
        return ans;
    }
};
