class Solution {
public:
    vector<vector<string>>ans;
    
    
    bool ispalindrome(string &s,int i,int j){
        while(i<j){
            if(s[i++]!=s[j--])return false;
        }
        return true;
    }
    
    void solve(vector<string>&tmp,string s,int k,int n){
        if(k==n){
            ans.push_back(tmp);
            return;
        }
        for(int i=k;i<n;i++){
            if(ispalindrome(s,k,i)){
                tmp.push_back(s.substr(k,i-k+1));
                solve(tmp,s,i+1,n);
                tmp.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<string>tmp;
        int n=s.length();
        solve(tmp,s,0,n);
        return ans;
    }
};
