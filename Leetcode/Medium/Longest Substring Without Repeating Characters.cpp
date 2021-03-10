class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        unordered_map<char,int>m;
        int k=0;
        for(int i=1;i<=s.length();i++){
            if(m[s[i-1]]>k)k=m[s[i-1]];
            m[s[i-1]]=i;
            ans=max(ans,i-k);
        }
        return ans;
    }
};
