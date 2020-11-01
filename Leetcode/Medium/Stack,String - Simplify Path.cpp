class Solution {
public:
    string simplifyPath(string path) {
        stack<string>stk;
        string tmp="";
        if(path=="")return "";
        int n=path.length();
        int i=0;
        while(i<n){
            while(i<n && path[i]!='/')tmp+=path[i++];
            if(tmp==".." && !stk.empty())stk.pop();
            if(tmp!=".."&& tmp!="."&& tmp!="")stk.push(tmp);
            i++;
            tmp="";
        }
        string ans="";
        // while(!stk.empty()){
        //     cout<<stk.top()<<" , ";
        //     stk.pop();
        // }
        vector<string>v;
        while(!stk.empty())v.push_back(stk.top()),stk.pop();
        reverse(v.begin(),v.end());
        for(auto x:v)ans+='/',ans+=x;
        if(ans=="")ans+='/';
        return ans;
        
    }
};
