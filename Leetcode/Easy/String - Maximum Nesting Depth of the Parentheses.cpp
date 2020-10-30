class Solution {
public:
    int maxDepth(string s) {
        int sum=0,ans=0;
        for(auto x:s){
            if(x=='(')sum++;
            else if(x==')')sum--;
            ans=max(ans,sum);
        }
        return ans;
    }
};
