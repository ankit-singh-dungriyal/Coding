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
    
    void solve(TreeNode* tmp, int l, int r, vector<int>&v){
        if(l>r)return ;
        int mx= *max_element(v.begin()+l, v.begin()+r+1);
        int pos;
        for(int i=l;i<=r;i++){
            if(v[i]==mx){
                pos=i;
                break;
            }
        }
        tmp->val= mx;
        if(l<=pos-1)
        tmp->left= new TreeNode();
        if(pos+1<=r)
        tmp->right= new TreeNode();
        solve(tmp->left, l, pos-1,v);
        solve(tmp->right, pos+1, r, v);
        return;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* root=new TreeNode(0);
        solve(root, 0, nums.size()-1, nums);
        return root;
        
    }
};
