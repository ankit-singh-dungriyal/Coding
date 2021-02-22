class Solution {
public:
    int brokenCalc(int x, int y) {
        if(x>=y)return x-y;
        long long ans=0;
        while(y>x){
            if(y&1)y++;
            else y/=2;
            ans++;
        }
        ans+=x-y;
        return ans;
    }
};
