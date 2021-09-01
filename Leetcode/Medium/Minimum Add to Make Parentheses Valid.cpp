class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0,cnt=0;
        for(char ch:s){
            if(ch=='(')cnt++;
            else cnt--;
            if(cnt<0)ans++,cnt=0;
        }
        if(cnt>0)ans+=cnt;
        return ans;
    }
    
};
