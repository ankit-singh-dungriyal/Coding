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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a=headA,*b=headB,*ans=NULL;
        int la=0,lb=0;
        while(a)a=a->next,la++;
        while(b)b=b->next,lb++;
        // cout<<la<<" "<<lb<<endl;
        int dif=abs(la-lb);
        if(la>lb){
            while(dif)headA=headA->next,dif--;
        }
        else{
            while(dif)headB=headB->next,dif--;
        }
        while(headA && headB){
            if(headA==headB){
                ans=headA;
                return ans;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return ans;
    }
};
