class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector<int>cnb(26,0);
        for(string s:B){
            vector<int>tmp(26,0);
            for(char ch:s)tmp[ch-'a']++;
            for(int i=0;i<26;i++)cnb[i]=max(cnb[i],tmp[i]);
        }
        vector<string>ans;
        for(string s:A){
            vector<int>cna(26,0);
            for(char ch:s)cna[ch-'a']++;
            bool f=true;
            for(int i=0;i<26;i++){
                if(cnb[i]>cna[i]){
                    f=false;
                    break;
                }
            }
            if(f)ans.push_back(s);
        }
        return ans;
    }
};
