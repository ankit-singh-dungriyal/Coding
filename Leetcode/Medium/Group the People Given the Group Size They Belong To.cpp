class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gs) {
        vector<vector<int>>ans;
        int n=gs.size();
        vector<pair<int,int>>vp(n);
        for(int i=0;i<n;i++){
            vp[i]=make_pair(gs[i],i);
        }
        sort(vp.begin(),vp.end());
        vector<int>tmp;
        for(int i=0;i<n;i++){
            tmp.push_back(vp[i].second);
            if(tmp.size()==vp[i].first)ans.push_back(tmp),tmp.clear();
        }
        return ans;
        
    }
};
