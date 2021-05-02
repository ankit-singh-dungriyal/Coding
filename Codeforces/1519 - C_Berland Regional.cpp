/*
Contest Id: 1519
Submission Id: 114821467
Date & Time: 02/05/2021 10:08:46
Tags/Concept used: ['brute force', 'data structures', 'greedy', 'sortings']
*/

#include<bits/stdc++.h>
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
#define MAX 400005
#define N 10000007
#define F first
#define S second
using u64= uint64_t;


void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n),s(n);
    for(auto &x:v)cin>>x;
    for(auto &x:s)cin>>x;
    vector<pair<ll,ll>>vp;
    for(int i=0;i<n;i++)vp.pb(mp(v[i],s[i]));
    sort(all(vp));
    vector<vector<ll>>pro;
    vector<ll>tmp;
    tmp.pb(vp[0].S);
    for(int i=1;i<n;i++){
        if(vp[i-1].F!=vp[i].F){
            pro.pb(tmp);
            tmp.clear();
        }
        tmp.pb(vp[i].S);
    }
    if(!tmp.empty())pro.pb(tmp);
    for(auto &vec:pro)sort(all(vec),greater<ll>());
    for(auto &vec:pro){
        for(int i=1;i<vec.size();i++)vec[i]+=vec[i-1];
    }

    vector<ll>ans(n,0);
    for(auto &vec:pro){
        int sz=vec.size();
        for(int i=1;i<=sz;i++){
            int p=(sz/i) * i;
            ans[i-1]+=vec[p-1];
        }
    }
    // for(int i=1;i<=n;i++){
    //     ll ans=0;
    //     for(auto &vec:pro){
    //         ll sz=vec.size();
    //         ll tmp=sz-sz%i;
    //         if(tmp>0)ans+=vec[tmp-1];
    //     }
    //     if(ans==0){
    //         for(int j=i;j<=n;j++)cout<<0<<" ";
    //         break;
    //     }
    //     cout<<ans<<" ";
    // }
    for(auto &x:ans)cout<<x<<" ";
    cout<<"\n";
    
   


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