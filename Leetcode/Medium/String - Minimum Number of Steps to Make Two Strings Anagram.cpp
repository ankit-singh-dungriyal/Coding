class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>a(26,0),b(26,0);
        for(char x:s)a[x-'a']++;
        for(char x:t)b[x-'a']++;
        int ans=0;
        for(int i=0;i<26;i++){
            if(a[i]>b[i])ans+=a[i]-b[i];
        }
        return ans;
    }
};
