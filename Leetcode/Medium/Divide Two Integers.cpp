class Solution {
public:
    int divide(int dividend, int divisor) {
        long long dividend2=abs(dividend);
        long long divisor2=abs(divisor);
        // cout<<dividend<<" "<<divisor<<" ";
        if(dividend2<divisor2)return 0;
        vector<long long>v;
        bool f=false;
        if(dividend<0)f=!f;
        if(divisor<0)f=!f;
        long long tmp=divisor2;
        while(tmp<=dividend2)v.push_back(tmp),tmp=tmp+tmp;
        int n=v.size();
        vector<long long>a;
        long long k=v[n-1];
        for(int i=n-2;i>=0;i--){
            if(k+v[i]<=dividend2)k+=v[i],a.push_back(i);
        }
        long long ans=0;
        vector<long long>cn;
        tmp=1;
        for(int i=0;i<n;i++)cn.push_back(tmp),tmp=tmp+tmp;
        for(auto x:a)ans+=cn[x];
        ans+=*max_element(cn.begin(),cn.end());
        if(f)ans=-ans;
        
        // for(auto x:v)cout<<x<<" ";
        // cout<<"\n";
        // for(auto x:a)cout<<x<<" ";
        if(ans==2147483648)ans--;
        // cout<<ans<<" ";
        return ans;
    }
};
