class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 1;
        vector<int>odd(n),even(n);
        odd[0]=0;
        even[0]=nums[0];
        for(int i=1;i<n;i++){
            if(i&1)odd[i]=odd[i-1]+nums[i];
            else odd[i]=odd[i-1];
            if(!(i&1))even[i]=even[i-1]+nums[i];
            else even[i]=even[i-1];
        }
        // for(auto x:odd)cout<<x<<" ";
        // cout<<"\n";
        // for(auto x:even)cout<<x<<" ";
        // cout<<"\n";
        int ans=0;
        for(int i=0;i<n;i++){
            int odd_sum,even_sum;
            if(i==0){
                odd_sum=even[n-1]-even[i];
                even_sum=odd[n-1]-odd[i];
            }
            else if(i==n-1){
                odd_sum=odd[n-2];
                even_sum=even[n-2];
            }
            else{
                odd_sum=odd[i-1]+even[n-1]-even[i];
                even_sum=even[i-1]+odd[n-1]-odd[i];
            }
            // cout<<even_sum<<" "<<odd_sum<<"\n";
            if(even_sum==odd_sum)ans++;
        }
        return ans;
    }
};
