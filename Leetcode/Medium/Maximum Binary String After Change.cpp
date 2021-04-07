class Solution {
public:
    string maximumBinaryString(string binary) {
        int cnz=0,cno=0;
        string ans="";
        int j=0,n=binary.length();
        for(;j<n;j++){
            if(binary[j]=='0')break;
        }
        if(j==n)return binary;
        for(int i=0;i<n;i++)ans+='1';
        for(char &ch:binary)(ch=='0')?cno++:cno;
        ans[j+cno-1]='0';
        return ans;
        
    }
};
