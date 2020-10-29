class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
    
        int a=0,b=0,c=0;
        for(int i=cost.size()-1;i>=0;i--)c=cost[i]+min(a,b),a=b,b=c;
        return min(a,b);
    }
};
