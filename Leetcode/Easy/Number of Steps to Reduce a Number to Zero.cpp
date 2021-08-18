class Solution {
public:
    int numberOfSteps(int num) {
        int ans=0;
        while(num){
            if(num & 1)ans++;
            num>>=1;
            if(num) ans++;
        }
        return ans;
    }
};
