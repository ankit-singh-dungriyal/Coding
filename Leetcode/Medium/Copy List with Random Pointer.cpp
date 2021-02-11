/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)return head;
        Node *tmp,*h=head,*ans_head;
        while(h){
            tmp=h;
            h=h->next;
            tmp->next=new Node(tmp->val);
            tmp->next->next=h;
        }
        
        // tmp=head;
        // while(tmp){
        //     cout<<tmp->val<<" ";
        //     tmp=tmp->next;
        // }
        tmp=head;
        while(tmp && tmp->next){
            Node *p=tmp->random;
            if(p)p=p->next;
            tmp->next->random=p;
            tmp=tmp->next->next;
        }
        h=head;
        Node* ans=new Node(0);
        tmp=ans;
        while(h)
        {
            tmp->next=h->next;
            h->next=h->next->next;
            h=h->next;
            tmp=tmp->next;
        }
        return ans->next;
        
    }
};
