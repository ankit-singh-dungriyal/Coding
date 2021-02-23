/*
Contest Id: 1440
Submission Id: 106179593
Date & Time: 01/02/2021 16:14:58
Tags/Concept used: ['constructive algorithms', 'implementation']
*/


#include<bits/stdc++.h>
// #include<thread>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000000000000000LL
typedef unsigned long long ull;
#define mod 1000000007
#define M 31
#define N 30
#define F first
#define S second
using u64= uint64_t;

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    vector<string>str(n);
    for(auto &x:str)cin>>x;
    vector<pair<int,int>>ans;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)v[i][j]=(int)(str[i][j]-'0');
    int n1=n,m1=m;
    if(n&1)n1--;
    if(m&1)m1--;
    for(int x=0;x<n1;x+=2){
        for(int y=0;y<m1;y+=2){
            vector<pair<int,int>>one,zero;
            for(int i=x;i<x+2;i++){
                for(int j=y;j<y+2;j++){
                    if(v[i][j]==0)zero.pb(mp(i,j));
                    else one.pb(mp(i,j));
                }
            }
            ll os=one.size(),zs=zero.size();
            if(os==1){
                for(auto p:one)ans.pb(mp(p.F,p.S));
                ans.pb(mp(zero[0].F,zero[0].S));
                ans.pb(mp(zero[1].F,zero[1].S));
                ans.pb(mp(zero[2].F,zero[2].S));
                ans.pb(mp(zero[0].F,zero[0].S));
                ans.pb(mp(one[0].F,one[0].S));
                ans.pb(mp(zero[2].F,zero[2].S));
                ans.pb(mp(one[0].F,one[0].S));
                ans.pb(mp(zero[1].F,zero[1].S));
            }
            else if(os==2){
                for(auto p:zero)ans.pb(mp(p.F,p.S));
                ans.pb(mp(one[0].F,one[0].S));
                for(auto p:zero)ans.pb(mp(p.F,p.S));
                ans.pb(mp(one[1].F,one[1].S));
            }
            else if(os==3){
                for(auto p:one)ans.pb(mp(p.F,p.S));
            }
            else if(os==4){
                ans.pb(mp(one[0].F,one[0].S));
                ans.pb(mp(one[1].F,one[1].S));
                ans.pb(mp(one[2].F,one[2].S));
                ans.pb(mp(one[3].F,one[3].S));
                ans.pb(mp(one[1].F,one[1].S));
                ans.pb(mp(one[2].F,one[2].S));
                ans.pb(mp(one[0].F,one[0].S));
                ans.pb(mp(one[1].F,one[1].S));
                ans.pb(mp(one[3].F,one[3].S));
                ans.pb(mp(one[0].F,one[0].S));
                ans.pb(mp(one[3].F,one[3].S));
                ans.pb(mp(one[2].F,one[2].S));

            }
        }
    }
    if(n&1){
        
        for(int i=0;i<m1;i+=2){
            vector<pair<int,int>>one,zero;
            zero.pb(mp(n-2,i));
            zero.pb(mp(n-2,i+1));
            if(v[n-1][i]==1)one.pb(mp(n-1,i));
            else zero.pb(mp(n-1,i));
            if(v[n-1][i+1]==1)one.pb(mp(n-1,i+1));
            else zero.pb(mp(n-1,i+1));
            ll os=one.size();
        if(os==1){
                for(auto p:one)ans.pb(mp(p.F,p.S));
                ans.pb(mp(zero[0].F,zero[0].S));
                ans.pb(mp(zero[1].F,zero[1].S));
                ans.pb(mp(zero[2].F,zero[2].S));
                ans.pb(mp(zero[0].F,zero[0].S));
                ans.pb(mp(one[0].F,one[0].S));
                ans.pb(mp(zero[2].F,zero[2].S));
                ans.pb(mp(one[0].F,one[0].S));
                ans.pb(mp(zero[1].F,zero[1].S));
            }
            else if(os==2){
                for(auto p:zero)ans.pb(mp(p.F,p.S));
                ans.pb(mp(one[0].F,one[0].S));
                for(auto p:zero)ans.pb(mp(p.F,p.S));
                ans.pb(mp(one[1].F,one[1].S));
            }

        }
        
    }
    if(m&1){
        
        for(int i=0;i<n1;i+=2){
             vector<pair<int,int>>one,zero;
            zero.pb(mp(i,m-2));
            zero.pb(mp(i+1,m-2));
            if(v[i][m-1]==1)one.pb(mp(i,m-1));
            else zero.pb(mp(i,m-1));
            if(v[i+1][m-1]==1)one.pb(mp(i+1,m-1));
            else zero.pb(mp(i+1,m-1));
            ll os=one.size();
        if(os==1){
                for(auto p:one)ans.pb(mp(p.F,p.S));
                ans.pb(mp(zero[0].F,zero[0].S));
                ans.pb(mp(zero[1].F,zero[1].S));
                ans.pb(mp(zero[2].F,zero[2].S));
                ans.pb(mp(zero[0].F,zero[0].S));
                ans.pb(mp(one[0].F,one[0].S));
                ans.pb(mp(zero[2].F,zero[2].S));
                ans.pb(mp(one[0].F,one[0].S));
                ans.pb(mp(zero[1].F,zero[1].S));
            }
            else if(os==2){
                for(auto p:zero)ans.pb(mp(p.F,p.S));
                ans.pb(mp(one[0].F,one[0].S));
                for(auto p:zero)ans.pb(mp(p.F,p.S));
                ans.pb(mp(one[1].F,one[1].S));
            }

        }
        

    }

    if(m&1 && n&1 && v[n-1][m-1]==1){
        vector<pair<int,int>>one,zero;
        one.pb(mp(n-1,m-1));
        zero.pb(mp(n-1,m-2));
        zero.pb(mp(n-2,m-2));
        zero.pb(mp(n-2,m-1));
        for(auto p:one)ans.pb(mp(p.F,p.S));
                ans.pb(mp(zero[0].F,zero[0].S));
                ans.pb(mp(zero[1].F,zero[1].S));
                ans.pb(mp(zero[2].F,zero[2].S));
                ans.pb(mp(zero[0].F,zero[0].S));
                ans.pb(mp(one[0].F,one[0].S));
                ans.pb(mp(zero[2].F,zero[2].S));
                ans.pb(mp(one[0].F,one[0].S));
                ans.pb(mp(zero[1].F,zero[1].S));

    }

    ll sz=ans.size();
    cout<<sz/3<<"\n";
    int cnt=0;
    for(auto x:ans){
        cout<<x.F+1<<" "<<x.S+1<<" ";
        cnt++;
        if(cnt==3){
            cout<<"\n";
            cnt=0;
        }
    }

    return;
}

int main()
{
fast
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t=1LL;
cin>>t;
while(t--)
{
solve();   
}
 
} 