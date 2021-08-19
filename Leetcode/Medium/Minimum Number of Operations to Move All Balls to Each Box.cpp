class Solution {
public:
    vector<int> minOperations(string v) {
        int cnt=0;
        int n=v.length();
        vector<int>ans(n),tmp(n);
        if(v[0]=='1')cnt++;
        ans[0]=0,tmp[n-1]=0;
        for(int i=1;i<n;i++){
            if(cnt)ans[i]=ans[i-1]+cnt;
            if(v[i]=='1')cnt++;
        }
        cnt=0;
        if(v[n-1]=='1')cnt++;
        for(int i=n-2;i>=0;i--){
            if(cnt)tmp[i]=tmp[i+1]+cnt;
            if(v[i]=='1')cnt++;
        }
        for(int i=0;i<n;i++)ans[i]+=tmp[i];
        return ans;
    }
};
