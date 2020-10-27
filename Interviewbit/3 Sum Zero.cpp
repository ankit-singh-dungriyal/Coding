/*
    Asked in:  
    Facebook
    Google

*/

// Two Pointer

vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int>>ans;
    int n=A.size();
    set<vector<int>>s;
    sort(A.begin(),A.end());
    for(int k=0;k<n-2;k++){
        int i=k+1;
        int j=n-1;
        while(i<j){
            long int sum=(long int)((long int)A[k]+(long int)A[i]+(long int)A[j]);
            // if(!sum)cout<<A[k]<<" "<<A[i]<<" "<<A[j]<<"\n";
            if(!sum)s.insert({A[k],A[i],A[j]});
            if(sum<0)i++;
            else j--;
        }
    }
    for(vector<int> x:s)ans.push_back(x);
    return ans;
}
