class Solution {
public:
    int findMinDifference(vector<string>& v) {
        sort(v.begin(),v.end());
        int ans=INT_MAX;
        int n=v.size();
        for(int i=1;i<n;i++){
            int hr1=(v[i][0]-'0')*10+(v[i][1]-'0');
            int mn1=(v[i][3]-'0')*10+(v[i][4]-'0');
            int hr2=(v[i-1][0]-'0')*10+(v[i-1][1]-'0');
            int mn2=(v[i-1][3]-'0')*10+(v[i-1][4]-'0');
            ans=min(ans,hr1*60+mn1-hr2*60-mn2);
        }
        int hr1=(v[n-1][0]-'0')*10+(v[n-1][1]-'0');
        int mn1=(v[n-1][3]-'0')*10+(v[n-1][4]-'0');
        int hr2=(v[0][0]-'0')*10+(v[0][1]-'0');
        int mn2=(v[0][3]-'0')*10+(v[0][4]-'0');
        
        ans=min(ans,24*60-hr1*60-mn1+hr2*60+mn2);
        return ans;
    }
};
