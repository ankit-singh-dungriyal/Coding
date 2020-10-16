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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return head;
        ListNode *curr=head,*tmp=head;
        while(curr && curr->next){
            tmp=curr;
            while(1){
                if(tmp->next!=NULL && tmp->val==tmp->next->val)tmp=tmp->next;
                else break;
            }
            curr->next=tmp->next;
            curr=curr->next;
        }
        return head;
    }
};
