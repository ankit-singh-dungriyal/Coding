class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(n),b(n);
        a[0]=nums[0];
        b[n-1]=nums[n-1];
        for(int i=1;i<n;i++)a[i]=max(a[i-1],nums[i]);
        for(int i=n-2;i>=0;i--)b[i]=min(b[i+1],nums[i]);
        for(int i=0;i<n-1;i++){
            if(a[i]<=b[i+1])return i+1;
        }
        return 0;
        
    }
};
