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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)return head;
        while(head && head->val==val)head=head->next;
        if(!head || !head->next)return head;
        ListNode *prev=head,*curr=head;
        while(curr && curr->next){
            curr=curr->next;
            while(curr && curr->val==val)curr=curr->next;
            prev->next=curr;
            prev=curr;
        }
        return head;
    }
};
