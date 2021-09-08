/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root)return 0;
        queue<Node*>q;
        q.push(root);
        int ans=0;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                for(auto x:q.front()->children)q.push(x);
                q.pop();
            }
            ans++;
        }
        return ans;
    }
};
