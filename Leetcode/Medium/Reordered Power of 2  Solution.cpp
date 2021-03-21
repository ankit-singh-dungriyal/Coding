class Solution {
public:
    bool reorderedPowerOf2(int N) {
        int num=1;
        vector<vector<int>>v;
        while(num>0){
            int x=num;
            vector<int>tmp(10,0);
            while(x)tmp[x%10]++,x/=10;
            num<<=1;
            v.push_back(tmp);
        }
        vector<int>ts(10,0);
        while(N)ts[N%10]++,N/=10;
        for(auto x:v){
            bool f=true;
            for(int i=0;i<10;i++)if(ts[i]!=x[i]){f=false;break;}
            if(f)return true;
        }
        return false;
        
    }
};
