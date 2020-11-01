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
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& G) {
        unordered_map<int,int>m;
        for(auto x:G)m[x]=1;
        int ans=0;
        int tmp=0,k=0;
        while(head){
            if(!m[head->val]&& tmp)ans++;
            if(!m[head->val])tmp=0;
            else tmp=1;
            if(!head->next && m[head->val])ans++;
            head=head->next;
            k++;
        }
        // if(G.size()==k)ans++;
        return ans;
    }
};
