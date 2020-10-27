/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)return false;
        ListNode *f=head,*s=head->next->next;
        while(s && s->next){
            if(s->val==f->val)return true;
            f=f->next;
            s=s->next->next;
        }
        return false;
    }
};
