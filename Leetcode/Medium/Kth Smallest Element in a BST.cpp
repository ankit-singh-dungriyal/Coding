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
    vector<int>v;
public:
    void inorder_traversal(TreeNode *trav){
        if(!trav)return;
        inorder_traversal(trav->left);
        v.push_back(trav->val);
        inorder_traversal(trav->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder_traversal(root);
        return v[k-1];
    }
};
