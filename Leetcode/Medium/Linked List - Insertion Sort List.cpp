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
    ListNode* insertionSortList(ListNode* head) {
        if(!head)return head;
        ListNode *sortnode=nullptr,*next=nullptr,*curr=head;
        while(curr){
            next=curr->next;
            solve(sortnode,curr);
            curr=next;
        }
        return sortnode;
    }
    void solve(ListNode* &head,ListNode* newnode){
        if(head==NULL || head->val>=newnode->val){
            newnode->next=head;
            head=newnode;
        }
        else{
            ListNode *curr=head;
            while(curr->next && curr->next->val<newnode->val)curr=curr->next;
            newnode->next=curr->next;
            curr->next=newnode;
        }
    }
};
