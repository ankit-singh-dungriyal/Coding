/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return root;
        Node* tmp=root;
        while(tmp->left){
            Node *k=tmp;
            while(k){
                k->left->next=k->right;
                if(k->next){
                    k->left->next->next=k->next->left;
                    //or
                    // k->right->next=k->next->left;
                }
                k=k->next;
            }
            tmp=tmp->left;
        }
        return root;
    }
};



/*
class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*>q;
        Node *ans=root;
        if(!ans)return ans;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            Node *tmp;
            for(int i=0;i<n;i++){
                tmp=q.front();
                q.pop();
                if(tmp->left)q.push(tmp->left);
                if(tmp->right)q.push(tmp->right);
                if(i<n-1)tmp->next=q.front();
            }
            tmp->next=NULL;
        }
        return ans;
    }
};
*/
