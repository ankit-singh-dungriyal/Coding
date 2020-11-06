class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int i=1,j=1000000;
        int ans=INT_MAX;
        while(i<=j){
            int sum=0;
            int m=i+(j-i)/2;
            for(auto x:nums)sum+=(ceil((float)x/(float)m));
            if(sum>threshold)i=m+1;
            else j=m-1;
            // cout<<sum<<" "<<m<<", ";
            if(sum<=threshold)ans=min(ans,m);
        }
        return ans;
        
    }
};
