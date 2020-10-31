class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.length();
        int m=b.length();
        int carry=0;
        string ans="";
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int i=0;
        while(i<n && i<m){
            int cn=0;
            cn+=a[i]=='1'?1:0;
            cn+=b[i]=='1'?1:0;
            cn+=carry;
            carry=cn/2;
            cn=cn%2;
            ans+=cn?'1':'0';
            i++;
        }
        while(i<n){
            int cn=0;
            cn+=a[i]=='1'?1:0;
            cn+=carry;
            carry=cn/2;
            cn=cn%2;
            ans+=cn?'1':'0';
            i++;
        }
         while(i<m){
            int cn=0;
            cn+=b[i]=='1'?1:0;
            cn+=carry;
            carry=cn/2;
            cn=cn%2;
            ans+=cn?'1':'0';
             i++;
        }
        if(carry)ans+='1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
