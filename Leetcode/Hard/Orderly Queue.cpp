class Solution {
public:
    string orderlyQueue(string s, int k) {
        string ans=s;
        if(k==1){
            for(int i=0;i<s.length();i++){
            string tmp= s.substr(i) + s.substr(0,i);
            ans=min(ans,tmp);
            }
            return ans;
        }
        sort(s.begin(),s.end());
        return s;
    }
};
