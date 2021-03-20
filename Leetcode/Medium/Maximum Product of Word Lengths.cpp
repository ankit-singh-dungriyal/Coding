class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<long>v;
        for(string s:words){
            long k=0;
            for(char ch:s){
                long bit=(ch-'a');
                if(!((k>>bit)&1))k+=1<<bit;
            }
            v.push_back(k);
        }
        // for(auto x:v)cout<<x<<" ";
        int ans=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((v[i]&v[j])==0)ans=max(ans,(int)(words[i].length()*words[j].length()));
            }
        }
        return ans;
    }
};
