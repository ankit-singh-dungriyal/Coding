class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>a,b;
        for(int i=0;i<s.length();i++){
            // int x=s[i]-'a',y=t[i]-'a';
            char x=s[i],y=t[i];
            if(a.find(x)==a.end() && b.find(y)==b.end()){
                a[x]=y;
                b[y]=x;
            }
            else{
                if(a[x]!=y || b[y]!=x)return false;
            }
        }
        return true;
    }
};
