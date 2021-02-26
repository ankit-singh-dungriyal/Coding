class Solution {
public:
    string convert(string s, int numRows) {
        string ans="";
        if(numRows==1)return s;
        int n=s.length();
        int col=n;
        // cout<<col<<" "<<numRows*col<<"\n";
        vector<vector<char>>a(numRows,vector<char>(col, '*'));
        int i=0,j=0,k=0;
        bool f=true;
        while(k<n){
            if(i==0)f=true;
            else if(i==numRows-1)f=false;
            a[i][j]=s[k++];
            // cout<<i<<" "<<j<<"\n";
            if(f)i++;
            else i--,j++;
        }
        for(int i=0;i<numRows;i++){
            for(int j=0;j<col;j++){
                if(a[i][j]!='*')ans+=a[i][j];
            }
        }
        return ans;
    }
};
