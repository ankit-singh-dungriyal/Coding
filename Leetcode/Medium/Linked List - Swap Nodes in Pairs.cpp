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
    ListNode* swapPairs(ListNode* head) {
        if(!head)return head;
        ListNode *curr=head,*nxt=NULL,*nxt_n=NULL;
        ListNode *ans=NULL;
        if(curr->next)ans=curr->next;
        else return head;
        while(curr && curr->next){
            nxt=curr->next;
            nxt_n=nxt->next;
            nxt->next=curr;
            if(!nxt_n || !nxt_n->next)curr->next=nxt_n;
            else curr->next=nxt_n->next;
            curr=nxt_n;
        }
        return ans;
    }
};
