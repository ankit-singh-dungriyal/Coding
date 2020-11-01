class Solution {
public:
    int numTeams(vector<int>& v) {
        int ans=0;
        int n=v.size();
        for(int i=1;i<n-1;i++){
            int lg=0,ls=0,rg=0,rs=0;
            for(int j=0;j<i;j++){
                if(v[j]>v[i])lg++;
                if(v[j]<v[i])ls++;
            }
            for(int j=i+1;j<n;j++){
                if(v[j]>v[i])rg++;
                if(v[j]<v[i])rs++;
            }
            ans+=ls*rg+lg*rs;
        }
        return ans;
    }
};
