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
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0;
        ListNode* h1=head,*l,*r,*l1,*r1,*tmp,*tmp_head=head;
        while(h1)n++,h1=h1->next;
        int p=n-k+1;
        if(n==1)return head;
        else if(n==2){
            l=head->next;
            head->next->next=head;
            head->next=NULL;
            return l;
        }
        if(p<k)swap(p,k);
        if(k==1){
            int cn=1;
            while(cn<p-1)cn++,tmp_head=tmp_head->next;
            r=tmp_head->next;
            r->next=head->next;
            tmp_head->next=head;
            head->next=NULL;
            return r;
        }
        else if(p-k==1){
            int cn=1;
            while(cn<k-1)cn++,tmp_head=tmp_head->next;
            l=tmp_head;
            l1=l->next;
            r=l1->next;
            l->next=l1->next;
            l1->next=r->next;
            l->next->next=l1;
            return head;
        }
        else if(p-k>1){
            int cn=1;
            while(cn<k-1)cn++,tmp_head=tmp_head->next;
            l=tmp_head;
            l1=l->next;
            while(cn<p-1)cn++,tmp_head=tmp_head->next;
            r=tmp_head;
            r1=r->next;
            tmp=r1->next;
            l->next=r1;
            r1->next=l1->next;
            r->next=l1;
            l1->next=tmp;
            return head;
        }
        return head;
    }
};
