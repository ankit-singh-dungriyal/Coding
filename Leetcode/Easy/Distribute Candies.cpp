class Solution {
public:
    int distributeCandies(vector<int>& cnd) {
        int ans=1,i=1;
        int n=cnd.size();
        sort(cnd.begin(),cnd.end());
        while(i<n){
            while(i<n && cnd[i]==cnd[i-1])i++;
            if(i>=n)break;
            ans++;
            i++;
        }
        return min(ans,n/2);
        
    }
};
