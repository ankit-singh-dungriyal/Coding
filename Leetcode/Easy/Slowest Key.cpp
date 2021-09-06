class Solution {
public:
    char slowestKey(vector<int>& v, string s) {
        int mx=v[0];
        char ch=s[0];
        for(int i=1;i<v.size();i++){
            int tmp=v[i]-v[i-1];
            if(tmp>=mx){
                if(tmp>mx)mx=tmp,ch=s[i];
                else ch=max(ch,s[i]);
            }
        }
        return ch;
    }
};
