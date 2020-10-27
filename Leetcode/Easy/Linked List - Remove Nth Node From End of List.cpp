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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int cn=0;
        while(curr)curr=curr->next,cn++;
        int k=0;
        // cout<<cn<<"\n";
        cn=cn-n;
        curr=head;
        if(cn==0)head=head->next;
        else{
            while(k<cn-1)curr=curr->next,k++;
            curr->next=curr->next->next;
        }
        return head;
    }
};
