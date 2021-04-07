class Solution {
    int mod=1000000007;
public:
    int countPairs(vector<int>& d) {
        vector<long>req;
        long k=1;
        map<long,long>m;
        while(k<=(1<<21))req.push_back(k),k<<=1;
        for(auto &x:d)m[x]++;
        // cout<<req.back()<<" ";
        long ans=0;
        for(auto &x:m){
            for(auto &y:req){
                long tmp=y-x.first;
                if(tmp>=x.first && m.find(tmp)!=m.end()){
                    if(tmp==x.first)ans+=(m[x.first]*(m[x.first]-1))/2;
                    else ans+=m[x.first]*m[tmp];
                    ans%=mod;
                }
            }
            
        }
        return ans;
    }
};
