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
    unordered_map<int,int>m;
    TreeNode* solve(vector<int>&in,vector<int>&pos,int &k,int l,int r){
        if(l>r)return NULL;
        TreeNode *ans=new TreeNode(pos[k--]);
        
        int ind=m[pos[k+1]];
        ans->right=solve(in,pos,k,ind+1,r);
        ans->left=solve(in,pos,k,l,ind-1);
        return ans;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        if(!n)return NULL;
        TreeNode* ans;
        int k=n-1;
        for(int i=0;i<n;i++)m[inorder[i]]=i;
        ans=solve(inorder,postorder,k,0,n-1);
        return ans;
    }
};
