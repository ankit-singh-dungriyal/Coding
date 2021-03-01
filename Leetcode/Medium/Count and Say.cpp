class Solution {
public:
    string countAndSay(int n) {
        vector<string>v(max(n,2));
        v[0]="1";
        v[1]="11";
        for(int i=2;i<n;i++){
            string tmp="";
            int cn=1,j=1;
            int m=v[i-1].length();
            while(j<m){
                while(j<m && v[i-1][j]==v[i-1][j-1])cn++,j++;
                if(j>=m)break;
                tmp+='0'+cn;
                tmp+=v[i-1][j-1];
                cn=1;
                j++;
                
            }
            if(cn)tmp+=('0'+cn),tmp+=v[i-1][j-1];
            v[i]=tmp;
        }
        
        // for(int i=0;i<n;i++)cout<<v[i]<<"\n";
        return v[n-1];
    }
};
