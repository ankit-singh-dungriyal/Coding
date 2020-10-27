/*
    Asked in:  
    Amazon
    Microsoft

*/

//Tree Data Structure 

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void solve(TreeNode *root,vector<vector<int>>&ans){
    vector<int>res;
    queue<TreeNode*>q;
    if(!root)return;
    q.push(root);
    res.push_back(root->val);
    ans.push_back(res);
    res.clear();
    while(!q.empty()){
        queue<TreeNode*>tmp;
        while(!q.empty()){
            if(q.front()->left)tmp.push(q.front()->left);
            if(q.front()->right)tmp.push(q.front()->right);
            q.pop();
        }
        q=tmp;
        while(!tmp.empty())res.push_back(tmp.front()->val),tmp.pop();
        if(!res.empty())ans.push_back(res);
        res.clear();
    }
} 
 
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int>>ans;
    solve(A,ans);
    for(int i=0;i<ans.size();i++){
        if(i&1)reverse(ans[i].begin(),ans[i].end());
    }
    return ans;
    
}
