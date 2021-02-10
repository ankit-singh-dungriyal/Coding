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
        
    int sum=0;
    TreeNode* convertBST(TreeNode* root) {
        if(root){
        convertBST(root->right);
        sum+=root->val;
        root->val=sum;
        convertBST(root->left);
        }
        return root;
    }
};

/*
class Solution {
public:
        
    vector<int>v;
    map<int,int>m;
    TreeNode *solve(TreeNode *trav){
        if(!trav)return 0;
        TreeNode *ans=new TreeNode(m[trav->val]);
        ans->left=solve(trav->left);
        ans->right=solve(trav->right);
        return ans;
    }

    void func(TreeNode *t){
        if(!t)return ;
        v.push_back(t->val);
        func(t->left);
        func(t->right);
        return ;
    }
    
    TreeNode* convertBST(TreeNode* root) {
        TreeNode *tmp=root;
        if(!root)return root;
        func(root);
        sort(v.begin(),v.end(),greater<int>());
        m[v[0]]=v[0];
        for(int i=1;i<v.size();i++)m[v[i]]=m[v[i-1]]+v[i];
        return solve(root);
        
    }
};
*/
