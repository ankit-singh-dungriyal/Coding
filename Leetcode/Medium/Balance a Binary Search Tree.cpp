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
    void get_sorted_elements(vector<int>&v, TreeNode* trav){
        if(!trav)return;
        get_sorted_elements(v,trav->left);
        v.push_back(trav->val);
        get_sorted_elements(v,trav->right);
    }
    
    TreeNode* get_balanceBST(vector<int>&v, int l, int r,int n){
        if(l>r)return NULL;
        int m=(l+r)/2;
        TreeNode *ans = new TreeNode(v[m]);
        ans->left = get_balanceBST(v,l,m-1,n);
        ans->right = get_balanceBST(v,m+1,r,n);
        return ans;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        get_sorted_elements(v,root);
        int n=v.size();
        TreeNode *ans = get_balanceBST(v,0,n-1,n);
        return ans;
    }
};
