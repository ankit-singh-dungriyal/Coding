// By "ANKI"
#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000007
typedef unsigned long long ull;
#define M 1003LL
#define F first
#define S second
using u64= uint64_t;
 
/*

struct edge{
    ll a,b,c;
};
vector<ll>dis(M,lim);
vector<ll>path(M,-1);
vector<edge>e;

void bellman_ford(ll s,ll n,ll m){
    bool f=true;
    dis[s]=0;
    for(int i=0;i<n-1;i++){
        f=true;
        for(int j=0;j<m;j++){
            if(dis[e[j].a]<lim){
                if(dis[e[j].b]>dis[e[j].a]+e[j].c){
                    dis[e[j].b]=dis[e[j].a]+e[j].c;
                    path[e[j].b]=e[j].a;
                    f=false;
                }
            }
        }
        if(f)break;
    }
}

*/

int main()
{
fast
ll t=1LL;
cin>>t;

while(t--)
{
string s;
cin>>s;
bool f=false;
for(int i=0;i<s.length()-1;i++)if(s[i]!=s[i+1]){f=true;break;}
sort(all(s));
if(f)cout<<s<<"\n";
else cout<<"-1\n";

}
} 
