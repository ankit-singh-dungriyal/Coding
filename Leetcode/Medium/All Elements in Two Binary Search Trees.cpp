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
    void solve(TreeNode *trav, vector<int>&v){
        if(!trav)return;
        solve(trav->left, v);
        v.push_back(trav->val);
        solve(trav->right, v);
    }
        
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        solve(root1,v1);
        solve(root2,v2);
        vector<int>ans;
        int i=0,j=0,n=v1.size(),m=v2.size();
        while(i<n &&  j<m){
            if(v1[i]<v2[j])ans.push_back(v1[i++]);
            else ans.push_back(v2[j++]);
        }
        while(i<n)ans.push_back(v1[i++]);
        while(j<m)ans.push_back(v2[j++]);
        return ans;
    }
};
