/*
Contest Id: 1454
Submission Id: 106522932
Date & Time: 05/02/2021 16:02:21
Tags/Concept used: ['greedy', 'implementation']
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
    ll n,x;
    cin>>n;
    vector<ll>v(n),ans;
    for(auto &x:v)cin>>x;
    v.pb(mod);
    for(int i=0;i<n;i++){
        ans.pb(v[i]);
        while(v[i]==v[i+1])i++;
    }
    ll sz=ans.size();
   
    if(ans[0]==ans[sz-1])ans.pop_back();
        // for(auto x:ans)cout<<x<<" ";
    map<ll,ll>m;
 
    for(auto x:ans)m[x]++;
    ll res=mod;
    if(ans.size())res=m[ans[0]];
    for(auto x:m)res=min(res,x.S+1);
    res=min(res,m[ans[sz-1]]);
    if(res==mod)res=0;
    cout<<res<<"\n";
    
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