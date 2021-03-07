class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        for(auto &x:words)reverse(x.begin(),x.end());
        sort(words.begin(),words.end());
        // for(auto x:words)cout<<x<<" ";
        int cn=0,n=words.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=words[i].size();
            for(int j=i+1;j<n;j++){
                int k=words[i].size();
                int p=0;
                while(p<k){
                    if(words[i][p]!=words[j][p])break;
                    p++;
                }
                if(p==k){
                    cn+=k+1;
                    break;
                }
            }
        }
        ans+=n-cn;
        return ans;
    }
};
