class Solution {
public:
    int minOperations(int n) {
        int tmp=n/2;
        int ans;
        if(n%2==0)ans=tmp+tmp*(tmp-1);
        else ans=tmp*(tmp+1);
        return ans;
    }
};
