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
    ListNode* middleNode(ListNode* head) {
        if(!head)return head;
        ListNode *first=head,*second=head->next;
        while(second && second->next ){
            first=first->next;
            second=second->next->next;
        }
        if(!second)
        return first;
        else return first->next;
    }
};
