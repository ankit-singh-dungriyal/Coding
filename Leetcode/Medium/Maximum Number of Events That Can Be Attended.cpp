class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        priority_queue<int,vector<int>,greater<int>>pq;
        int n=0;
        sort(events.begin(),events.end());
        for(auto x:events)n=max(n,x[1]);
        int j=0,ans=0;
        for(int i=1;i<=n;i++){
            while(j<events.size() && i==events[j][0])pq.push(events[j][1]),j++;
            while(!pq.empty() && pq.top()<i)pq.pop();
            if(!pq.empty() && pq.top()>=i)ans++,pq.pop();
        }
        return ans;
    }
};
