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
    void insert(TreeNode* &root,int l,int r,vector<int>&v){
        if(l>r)return;
        int m=l+(r-l)/2;
        root=new TreeNode(v[m]);
        insert(root->left,l,m-1,v);
        insert(root->right,m+1,r,v);
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode *ans=NULL;
        insert(ans,0,nums.size()-1,nums);
        return ans;
    }
};
