class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        int n=nums.size();
        ans[0]=n+1;
        ans[1]=-1;
        int i=0,j=n-1;
        while(i<=j){
            int m=(i+j)/2;
            if(nums[m]>target)j=m-1;
            else if(nums[m]<target)i=m+1;
            else{
                ans[0]=min(ans[0],m);
                if(!m ||(m && nums[m-1]!=target))break;
                j=m-1;
            }
        }
        i=0,j=n-1;
        while(i<=j){
            int m=(i+j)/2;
            if(nums[m]>target)j=m-1;
            else if(nums[m]<target)i=m+1;
            else{
                ans[1]=max(ans[1],m);
                if(m==n-1 ||(m!=n-1 && nums[m+1]!=target))break;
                i=m+1;
            }
        }
        if(ans[0]==n+1)return{-1,-1};
        return ans;
    }
};
