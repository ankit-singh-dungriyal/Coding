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
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0;
        ListNode* h=head;
        if(!head)return head;
        while(h->next)h=h->next,n++;
        // h->next=head;
        n++;
        k=k%n;
        if(!k)return head;
        k=n-k;
        h->next=head;
        ListNode* ans,*trav=head;
        while(--k)trav=trav->next;
        ans=trav->next;
        trav->next=NULL;
        return ans;
    }
};
