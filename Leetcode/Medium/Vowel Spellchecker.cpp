class Solution {
    char check(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')return '*';
        return tolower(ch);
    }
    char lower(char ch){
        return tolower(ch);
    }
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_map<string,int>m,m2,m3;
        int n=wordlist.size();
        for(int i=0;i<n;i++){
            string tmp="";
            for(char ch:wordlist[i])
            tmp+=check(ch);
            if(m.find(tmp)==m.end())m[tmp]=i;
            tmp="";
            for(char ch:wordlist[i])tmp+=lower(ch);
            if(m3.find(tmp)==m3.end())m3[tmp]=i;
            m2[wordlist[i]]=i;
        }
        vector<string>ans;
        for(string str:queries){
            string tmp="";
            if(m2.find(str)!=m2.end()){
                ans.push_back(wordlist[m2[str]]);
                continue;
            }
            for(char ch:str)tmp+=lower(ch);
            if(m3.find(tmp)!=m3.end()){
                ans.push_back(wordlist[m3[tmp]]);
                continue;
            }
            tmp="";
            for(char ch:str)tmp+=check(ch);
            // cout<<tmp<<" ";
            if(m.find(tmp)!=m.end())ans.push_back(wordlist[m[tmp]]);
            else ans.push_back("");
        }
        return ans;
        
    }
};
