class Solution {
    long mod=1000000007;
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        unordered_map<long,long>m;
        for(auto x:arr)m[x]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(arr[i]%arr[j]==0){
                    if(m.find(arr[i]/arr[j])!=m.end()){
                        m[arr[i]]=(m[arr[i]]+m[arr[i]/arr[j]]*m[arr[j]])%mod;
                    }
                }
            }
        }
        long ans=0;
        for(auto x:m){
            // cout<<x.first<<" "<<x.second<<"\n";
            ans=(ans+x.second)%mod;
        }
        return ans;
        
    }
};
