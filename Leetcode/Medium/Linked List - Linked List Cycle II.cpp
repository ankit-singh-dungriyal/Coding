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
    ListNode *detectCycle(ListNode *head) {
        ListNode *f=head,*s=head;
        while(s && s->next){
            f=f->next;
            s=s->next->next;
            if(s==f){
                f=head;
                while(s!=f){
                    s=s->next;
                    f=f->next;
                }
                return s;
            }
        }
        return nullptr;
    }
};
