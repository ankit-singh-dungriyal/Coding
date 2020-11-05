class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        // int sz=edges.size();
        
        if(n==1){
            return{0};
        }
        vector<unordered_set<int>>v(n);
        for(auto x:edges){
            v[x[0]].insert(x[1]);
            v[x[1]].insert(x[0]);
        }
        queue<int>q;
        for(int i=0;i<n;i++)if(v[i].size()==1)q.push(i);
        // int l=q.size();
        int k=n;
        while(k>2){
           int l=q.size();
            k-=l;
            for(int i=0;i<l;i++){
                int val=q.front();
                q.pop();
                int x=*v[val].begin();
                v[x].erase(val);
                if(v[x].size()==1)q.push(x);
            }
        }
        vector<int>ans;
        while(!q.empty())ans.push_back(q.front()),q.pop();
        return ans;
    }
};
