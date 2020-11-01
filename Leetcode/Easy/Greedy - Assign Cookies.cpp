class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size();
        int m=s.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(s[j]>=g[i])j++,i++;
            else j++;
        }
        return i;
    }
};
