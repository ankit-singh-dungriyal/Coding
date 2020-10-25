/*
    Asked in:  
    Amazon

*/

// Tree Data Structure

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int solve(TreeNode *a, bool &ans){
    if(!a)return 0;
    int d1=1+solve(a->left,ans);
    int d2=1+solve(a->right,ans);
    if(abs(d1-d2)>1)ans=false;
    return max(d1,d2);
}
int Solution::isBalanced(TreeNode* A) {
    bool ans=true;
    int x=solve(A,ans);
    return ans;
}

