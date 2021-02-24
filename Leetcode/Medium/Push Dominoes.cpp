class Solution {
public:
    string pushDominoes(string dominoes) {
        int n=dominoes.length();
        string a="",b="";
        int cn=-1;
        for(int i=0;i<n;i++){
            if(dominoes[i]=='L')cn=-1;
            else if(dominoes[i]=='R')cn=0;
            
            if(cn>=0)a+=('0'+cn),cn++;
            else a+=dominoes[i];
        }
        cn=-1;
        for(int i=n-1;i>=0;i--){
            if(dominoes[i]=='R')cn=-1;
            else if(dominoes[i]=='L')cn=0;
            
            if(cn>=0)b+='0'+cn,cn++;
            else b+=dominoes[i];
        }
        reverse(b.begin(),b.end());
        // cout<<a<<"\n";
        // cout<<b<<"\n";
        string ans="";
        
        for(int i=0;i<n;i++){
            if(a[i]=='0')a[i]='R';
            if(b[i]=='0')b[i]='L';
            if(a[i]==b[i]){
                if(a[i]=='R' ||a[i]=='L')ans+=a[i];
                else ans+='.';
            }
            else if(a[i]=='.')ans+='L';
            else if(b[i]=='.')ans+='R';
            else if(a[i]<b[i])ans+='R';
            else ans+='L';
        }
        return ans;
    }
};
