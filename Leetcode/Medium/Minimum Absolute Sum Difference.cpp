class Solution {
    int mod=1000000007;
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        set<int>s;
        long ans=0;
        for(int i=0;i<n;i++)ans+=abs(nums1[i]-nums2[i]),ans=ans%mod;
        for(int x:nums1)s.insert(x);
        // cout<<ans<<"\n";
        long tmp1=ans,tmp2=ans;
        for(int i=0;i<n;i++){
            int mn=INT_MAX;
            auto it=s.lower_bound(nums2[i]);
            tmp1-=abs(nums2[i]-nums1[i]);
            if(it!=s.begin())mn=min(mn,abs(nums2[i]-*prev(it)));
            if(it!=s.end())mn=min(mn,abs(nums2[i]-*it));
            tmp1+=mn;
            // cout<<tmp1<<" ";
            ans=min(ans,tmp1);
            tmp1=tmp2;
        }
        return ans%mod;
    }
};
