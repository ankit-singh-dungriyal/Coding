class Solution {
public:
    string convertToTitle(int n) {
        string ans="";
        while(n){
            n--;
            int k=n%26;
            ans+='A'+k;
            n/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
