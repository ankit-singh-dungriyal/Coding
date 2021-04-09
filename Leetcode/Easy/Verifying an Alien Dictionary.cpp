class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int>v(26);
        for(int i=0;i<26;i++)v[order[i]-'a']=i;
        int n=words.size();
        for(string &s:words){
            for(int i=0;i<s.length();i++){
                s[i]=v[s[i]-'a']+'a';
            }
        }
        for(int i=1;i<n;i++){
            if(words[i]<words[i-1])return false;
        }
        return true;
    }
};
