class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(!n)return 0;
        int i=0,j=n-1;
        int lm=0,rm=0,ans=0;
        while(i<j){
            if(height[i]<height[j]){
                lm=max(lm,height[i]);
                ans+=max(0,lm-height[i]);
                i++;
            }
            else{
                rm=max(rm,height[j]);
                ans+=max(0,rm-height[j]);
                j--;
            }
        }
        return ans;
    }
};
