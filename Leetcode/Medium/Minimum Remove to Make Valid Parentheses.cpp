class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.length();
        string ans="";
        int tmp=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')tmp++;
            else if(s[i]==')')tmp--;
            if(tmp<0){
                tmp=0;
                continue;
            }
            ans+=s[i];
        }
        tmp=0;
        // cout<<ans<<"\n";
        string res="";
        for(int i=ans.length()-1;i>=0;i--){
            if(ans[i]==')')tmp++;
            else if(ans[i]=='(')tmp--;
            if(tmp<0){
                tmp=0;
                continue;
            }
            res+=ans[i];
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};
