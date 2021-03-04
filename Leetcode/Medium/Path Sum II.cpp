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
    
    vector<vector<int>>ans;
    void solve(TreeNode *trav,int tg_sum,int k,vector<int>tmp){
        if(!trav)return;
        if(!trav->left && !trav->right){
            tmp.push_back(trav->val);
            if(!(k-trav->val))ans.push_back(tmp);
            return;
        }
        tmp.push_back(trav->val);
        solve(trav->left,tg_sum,k-trav->val,tmp);
        solve(trav->right,tg_sum,k-trav->val,tmp);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>v;
        solve(root,targetSum,targetSum,v);
        return ans;
    }
};
