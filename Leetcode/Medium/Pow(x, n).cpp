class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(x==0)return 0;
        long int n1=n;
        if(n<0)x=1/x,n1=-n1;
        while(n1){
            if(n1&1)ans*=x;
            x=x*x;
            n1>>=1;
        }
        return ans;
    }
};
