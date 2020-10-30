class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int n=strs.size();
        if(!n)return s;
        s=strs[0];
        for(int i=1;i<n;i++){
            string tmp="";
            for(int j=0;j<s.size();j++){
                if(s[j]!=strs[i][j])break;
                tmp+=s[j];
            }
            s=tmp;
        }
        return s;
    }
};
