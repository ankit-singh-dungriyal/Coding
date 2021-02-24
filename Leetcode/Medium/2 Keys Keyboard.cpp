class Solution {
public:
    
    int minSteps(int n) {
        int res=0,k=2;
        while(n>1){
            while(n%k==0)res+=k,n/=k;
            k++;
        }
        return res;
    }
    
    /*
    
    int minSteps(int n) {
        vector<int>dp(n+1,INT_MAX);
        dp[0]=dp[1]=0;
        for(int i=2;i<=n;i++){
            dp[i]=min(dp[i],i);
            for(int j=i*2;j<=n;j+=i)dp[j]=min(dp[j],dp[i]+(j/i));
        }
        
        return dp[n];
    }
    */
};
