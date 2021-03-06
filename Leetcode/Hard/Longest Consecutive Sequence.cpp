class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int,int>m;
        for(int x:nums)m[x]=1;
        int ans=0,tmp=1;
        for(int x:nums){
            if(!m[x-1]){
                int val=x;
                tmp=1;
                while(m[++val])tmp++;
                ans=max(ans,tmp);
            }
        }
        return ans;
        
    }
};




/*

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0)return 0;
        set<int>s;
        for(auto x:nums)s.insert(x);
        vector<int>v;
        for(auto x:s)v.push_back(x);
        int ans=1,sum=1;
        for(int i=1;i<v.size();i++){
            if(v[i]==v[i-1]+1)sum++;
            else sum=1;
            ans=max(ans,sum);
        }
        return ans;
        
    }
};

*/
