/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
    TreeNode* solve(vector<int>&v,int l,int r){
        if(l>r)return NULL;
        int m=l+(r-l)/2;
        TreeNode *ans=new TreeNode(v[m]);
        ans->left=solve(v,l,m-1);
        ans->right=solve(v,m+1,r);
        return ans;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>v;
        while(head)v.push_back(head->val),head=head->next;
        TreeNode* ans;
        ans=solve(v,0,v.size()-1);
        return ans;
    }
};
