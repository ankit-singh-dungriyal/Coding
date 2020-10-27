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
    TreeNode *ans=NULL;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty())return ans;
        return solve(preorder,inorder,0,preorder.size()-1);
    }
    int k=0;
    TreeNode* solve(vector<int>&pre,vector<int>&in,int l,int r){
        if(l>r)return NULL;
        TreeNode *ans=new TreeNode(pre[k++]);
        for(int i=l;i<=r;i++){
            if(in[i]==pre[k-1]){
            ans->left=solve(pre,in,l,i-1);
            ans->right=solve(pre,in,i+1,r);
            break;
            }
        }
        return ans;
    }
};
