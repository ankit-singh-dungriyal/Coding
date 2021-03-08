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
class BSTIterator {
    vector<int>v;
    TreeNode *trav;
    int i=0;
public:
    BSTIterator(TreeNode* root) {
        trav=root;
        func(trav);
    }
    
    void func(TreeNode *trav){
        if(!trav)return;
        func(trav->left);
        v.push_back(trav->val);
        func(trav->right);
    }
    
    int next() {
        i++;
        return v[i-1];
    }
    
    bool hasNext() {
        if(i<v.size())return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
