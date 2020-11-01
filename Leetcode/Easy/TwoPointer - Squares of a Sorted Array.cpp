class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int>ans;
        int n=A.size();
        int j=n;
        for(int k=0;k<n;k++)if(A[k]>=0){j=k;break;}
        int i=j-1;
            while(i>=0 || j<n){
                int x=INT_MAX,y=INT_MAX;
                if(i>=0)x=A[i]*A[i];
                if(j<n)y=A[j]*A[j];
                if(x<y)ans.push_back(x),i--;
                else ans.push_back(y),j++;
            }
        return ans;
        
    }
};
