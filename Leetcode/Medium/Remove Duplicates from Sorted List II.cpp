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
        if(!head || !head->next)return head;
        ListNode *ans=new ListNode();
        ans->next=head;
        ListNode *trav=ans,*tmp=head;
        while(tmp){
            bool f=false;
            while(tmp && tmp->next && tmp->val==tmp->next->val){tmp=tmp->next;f=true;}
//             cout<<tmp->val<<" ";
            if(f && tmp)trav->next=tmp->next,tmp=tmp->next;
            else {
                trav->next=tmp;
                if(tmp)tmp=tmp->next;
            }
            if(!f)trav=trav->next;
            // tmp=trav;
        }
        return ans->next;
    }
};
