class Solution {
public:
    string intToRoman(int num) {
        vector<pair<string,int>>v={
            {"M",1000},
            {"CM",900},
            {"D",500},
            {"CD",400},
            {"C",100},
            {"XC",90},
            {"L",50},
            {"XL",40},
            {"X",10},
            {"IX",9},
            {"V",5},
            {"IV",4},
            {"I",1}
        };
        int i=0;
        string ans="";
        while(num){
            while(num>=v[i].second){
                num-=v[i].second;
                ans+=v[i].first;
            }
            i++;
        }
        return ans;
    }
};
