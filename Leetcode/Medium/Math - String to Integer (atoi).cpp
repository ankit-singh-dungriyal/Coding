class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        int n=s.length();
        long long mn=-pow(2,31);
        long long mx=pow(2,31)-1;
        int i=0;
        while(s[i]==' ')i++;
        bool f=true;
        if(s[i]<'0' && s[i]>'9' && s[i]!='-' && s[i]!='+')return 0;
        if(s[i]=='-')f=false,i++;
        else if(s[i]=='+')f=true,i++;
        while(s[i]>='0'&&s[i]<='9'){
            ans=ans*10+(s[i]-'0');
            if(!f && -ans<mn){
                ans=mn;
                break;
            }
            if(f && ans>mx){
                ans=mx;
                break;
            }
            i++;
        }
        if(!f)ans=-ans;
        return ans;
    }
};
