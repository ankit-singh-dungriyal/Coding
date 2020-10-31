class Solution {
public:
    string freqAlphabets(string s) {
        int n=s.length();
        int i=0;
        string ans="",tmp="";
        for(;i<n-2;){
            tmp="";
            if(s[i+2]=='#'){
                tmp+=s[i];
                i++;
                tmp+=s[i];
                i++;
                ans+=stoi(tmp)-1+'a';
            }
            else ans+='a'+(s[i]-'1');
            i++;
        }
        while(i<n)ans+='a'+(s[i++]-'1');
        return ans;
    }
};
