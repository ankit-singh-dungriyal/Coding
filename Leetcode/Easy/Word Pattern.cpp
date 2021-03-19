class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>vs;
        string tmp="";
        for(char ch:s){
            if(ch==' ')vs.push_back(tmp),tmp="";
            else tmp+=ch;
        }
        if(tmp!="")vs.push_back(tmp);
        // for(auto x:vs)cout<<x<<" ";
        map<string,string>a,b;
        int n=pattern.length(),m=vs.size();
        if(n!=m)return false;
        for(int i=0;i<n;i++){
            string x="",y=vs[i];
            x+=pattern[i];
            if(a.find(x)==a.end() && b.find(y)==b.end()){
                a[x]=y;
                b[y]=x;
            }
            else{
                if(a[x]!=y ||b[y]!=x)return false;
            }
        }
        return true;
    }
};
