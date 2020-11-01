class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        map<pair<int,int>,int>m;
        int n=points.size();
        int ans=0;
        if(!n)return 0;
        int v=0,h=0,same=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)continue;
                int  x=points[i][0]-points[j][0];
                int y=points[i][1]-points[j][1];
                if(x==0 && y)v++;
                else if(y==0 && x)h++;
                else if(x==0 && y==0)same++;
                else{
                    int g=__gcd(x,y);
                    x/=g,y/=g;
                    m[{x,y}]++;
                }
            }
            for(auto x:m)ans=max(ans,x.second+same);
            ans=max(ans,max(v,h)+same);
            v=0,h=0,same=0;
            m.clear();
        }
        // for(auto x:m)ans=max(ans,x.second);
        return ans+1;
    }
};
