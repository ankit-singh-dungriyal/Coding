/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans=NULL;
    
    void solve(TreeNode *org, TreeNode* clo, TreeNode *tar){
        if(!org)return;
        if(org==tar){
            ans=clo;
            return;
        }
        solve(org->left,clo->left,tar);
        solve(org->right,clo->right,tar);
    }
        
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        solve(original,cloned,target);
        return ans;
    }
};
