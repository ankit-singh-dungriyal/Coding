class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int cn=0;
        while(left!=right){
            left>>=1;
            right>>=1;
            cn++;
        }
        return left<<cn;
        
    }
};
