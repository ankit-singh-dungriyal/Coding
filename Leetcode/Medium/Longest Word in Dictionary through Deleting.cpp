class Solution {
public:
    
    bool solve(string a,string b){
        int j=0;
        for(int i=0;i<a.length()&&j<b.length();i++){
            if(a[i]==b[j])j++;
        }
        if(j==b.length())return true;
        return false;
    }
    
    string findLongestWord(string s, vector<string>& d) {
        string ans="";
        int l=0;
        for(auto x:d){
            if(solve(s,x)){
                if((x.length()>l)||(x.length()==l && x<ans))l=x.length(),ans=x;
            }
        }
        return ans;
    }
};
