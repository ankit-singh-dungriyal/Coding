class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        if(!n)return-1;
        int sum=0;
        for(int i=0;i<n;i++)sum+=gas[i]-cost[i];
        if(sum<0)return -1;
        int ans=0;
        sum=0;
        for(int i=0;i<n;i++){
            sum+=gas[i]-cost[i];
            if(sum<0)ans=i+1,sum=0;
        }
        return ans;
    }
};
