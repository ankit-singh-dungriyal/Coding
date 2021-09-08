class Solution {
public:
    string shiftingLetters(string s, vector<int>& v) {
        int n=v.size();
        v[n-1]=v[n-1]%26;
        for(int i=n-2;i>=0;i--)v[i]=(v[i]+v[i+1])%26;
        for(int i=0;i<n;i++){
            int tmp='z'-s[i];
            if(tmp<v[i])s[i]='a'+(v[i]-tmp-1);
            else s[i]+=v[i];
        }
        return s;
        
    }
};
