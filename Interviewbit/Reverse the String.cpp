/*

    Asked in:  
    Qualcomm
    Amazon
    Microsoft
    Cisco
    Facebook

*/

string Solution::solve(string A) {
    vector<string>ans;
    string tmp="";
    for(int i=0;i<A.length();i++){
        if(A[i]==' '){
            ans.push_back(tmp);
            tmp="";
            continue;
        }
        tmp+=A[i];
    }
    ans.push_back(tmp);
    // cout<<ans.size();
    reverse(ans.begin(),ans.end());
    string res="";
    for(auto x:ans){
        char tmp=' ';
        bool f=false;
        for(int i=0;i<x.length();i++)if(x[i]!=tmp){f=true;break;}
        if(f)res+=x+' ';
    }
    res.pop_back();
    return res;
}
