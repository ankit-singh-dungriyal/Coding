class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.length();
        vector<int>pos,ans;
        pos.push_back(-10006);
        for(int i=0;i<n;i++)if(s[i]==c)pos.push_back(i);
        int j=1;
        for(int i=0;i<n;i++){
            ans.push_back(min(abs(pos[j]-i),abs(pos[j-1]-i)));
            if(i==pos[j] && j<pos.size()-1)j++;

        }
        return ans;
        
    }
};
