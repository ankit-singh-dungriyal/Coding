class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>ans(num+1);
        ans[0]=0;
        int tmp;
        for(int i=1;i<=num;i++){
            if(i&&!(i&(i-1)))ans[i]=1,tmp=i;
            else ans[i]=ans[tmp]+ans[i-tmp];
        }
        return ans;
    }
};
