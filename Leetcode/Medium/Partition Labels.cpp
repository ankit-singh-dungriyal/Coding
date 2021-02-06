class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<vector<int>>v(26,vector<int>(2,-1));
        int n=s.length();
        for(int i=0;i<n;i++){
            if(v[s[i]-'a'][0]==-1)v[s[i]-'a'][0]=i;
        }
        for(int j=n-1;j>=0;j--){
            if(v[s[j]-'a'][1]==-1)v[s[j]-'a'][1]=j;
        }
        vector<int>ans;
        int i=0,r=0,l=0;
        while(i<n){
            r=max(r,v[s[i]-'a'][1]);
            if(i==r)ans.push_back(r-l+1),l=i+1,r=l;
            i++;
        }
        return ans;
    }
};
