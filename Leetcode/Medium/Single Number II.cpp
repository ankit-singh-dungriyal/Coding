class Solution {
public:
    int singleNumber(vector<int>& nums) {
        long int ans=0;
        for(int i=0;i<32;i++){
            int cn=0;
            for(int &x:nums){
                if(x&1)cn++;
                x>>=1;
            }
            cn%=3;
            ans+=cn*pow(2,i);
        }
        return ans;
    }
};
