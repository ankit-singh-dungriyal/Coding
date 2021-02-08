class Solution {
public:
    
    void dfs(string &d,int n,int i,vector<string>&ans,string str,vector<char>v[]){
        if(i==n){
            ans.push_back(str);
            return;
        }
        for(auto x:v[d[i]-'0']){
            str+=x;
            dfs(d,n,i+1,ans,str,v);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<char>v[10];
        vector<string>ans;
        char ch='a';
        for(int i=2;i<10;i++){
            int k=3;
            if(i==7||i==9)k=4;
            for(int j=0;j<k;j++)v[i].push_back(ch),ch++;
        }

        int n=digits.length();
        if(!n)return ans;
        string str="";
        dfs(digits,n,0,ans,str,v);
        return ans;
    }
};
