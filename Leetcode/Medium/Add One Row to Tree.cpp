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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        TreeNode *trav;
        if(d==1){
            trav= new TreeNode(v);
            trav->left=root;
            return trav;
        }
        queue<TreeNode*>q;
        q.push(root);
        int k=2;
        while(!q.empty()){
            int n=q.size();
            if(k==d)break;
            k++;
            for(int i=0;i<n;i++){
                TreeNode* tmp=q.front();
                q.pop();
                if(tmp->left)q.push(tmp->left);
                if(tmp->right)q.push(tmp->right);
            }
        }
        while(!q.empty()){
            TreeNode *l=new TreeNode(v);
            l->left=q.front()->left;
            q.front()->left=l;
            TreeNode *r=new TreeNode(v);
            r->right=q.front()->right;
            q.front()->right=r;
            q.pop();
        }
        return root;
    }
};
