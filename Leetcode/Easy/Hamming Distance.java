class Solution {
    public int hammingDistance(int x, int y) {
        int ans = 0;
        while(x!=0 && y!=0){
            ans+=((x&1)!=(y&1))?1:0;
            x>>=1;
            y>>=1;
        }

        while(x!=0){
            ans+=(x&1);
            x>>=1;
        }
        while(y!=0){
            ans+=(y&1);
            y>>=1;
        }
        return ans;
    }
}
