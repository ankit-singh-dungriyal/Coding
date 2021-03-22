class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(nums);
        sort(v.begin(),v.end());
        int i=(n-1)/2,j=n-1;
        for(int k=0;k<n;k++){
            if(k&1)nums[k]=v[j--];
            else nums[k]=v[i--];
        }
        
    }
};
