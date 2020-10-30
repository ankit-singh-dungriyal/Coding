class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,string>m;
        for(auto x:paths)m[x[0]]=x[1];
        string s=paths[0][0];
        while(m[s]!="")s=m[s];
        return s;
    }
};
