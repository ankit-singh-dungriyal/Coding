class Solution {
public:
    int maximumSwap(int num) {
        string s="";
        long long n1=num;
        while(num)s+='0'+num%10,num/=10;
        reverse(s.begin(),s.end());
        int n=s.length();
        for(int k=0;k<n;k++){
        int p=k;
        char mx=s[k];
        for(int i=k;i<n;i++)if(s[i]>=mx)mx=s[i],p=i;
        swap(s[k],s[p]);
        long long ans=0;
        // for(auto x:s)cout<<x<<" ";
        for(auto x:s)ans=ans*10+(x-'0');
        if(ans!=n1)
        return ans;
            
        }
        return n1;
    }
};
