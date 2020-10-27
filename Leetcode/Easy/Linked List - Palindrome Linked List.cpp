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
    bool isPalindrome(ListNode* head) {
        if(!head)return true;
        ListNode *head2=new ListNode();
        ListNode *trav=head;
        ListNode *j=head2;
        while(trav)head2->next=new ListNode(trav->val),trav=trav->next,head2=head2->next;
        ListNode *curr=j->next,*next=NULL,*prev=NULL;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        while(head && prev){
            if(head->val!=prev->val)return false;
            // cout<<head->val<<" "<<prev->val<<"\n";
            head=head->next;
            prev=prev->next;
        }
        return true;
    }
};
