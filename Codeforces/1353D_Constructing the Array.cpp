// D Constructing the Array(Codeforces Round #642 (Div. 3))
// Concepts used: queue, sorting, constructive algorithms
// 'By Anki'

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
#define lim 1000000007LL
typedef unsigned long long ull;
#define M 1000006
using u64= uint64_t;
// using i128= __int128;
// typedef unsigned int uint128_t __attribute__((mode(TI)));
 
ll gcd(ll a,ll b){
    return b?gcd(b,a%b):a;
}
 
ll fact(ll n)
{
    ll ans=1LL;
    while(n)
    ans*=(n--);
    return ans;

}


bool comp(pair<ll,ll>a,pair<ll,ll>b){
    ll l1=a.second-a.first+1;
    ll l2=b.second-b.first+1;
    if(l1==l2)return a.first<b.first;
    else return l1>l2;
}
vector<ll>ans(200005);
vector<pair<ll,ll>>v;
void solve(ll n){
        queue<pair<ll,ll>>q;
        q.push(mp(1,n));
        ll cn=0LL;
        while(!q.empty()){
            pair<ll,ll>p=q.front();
            q.pop();
            v.pb(mp(p.first,p.second));
            if(p.first!=p.second){
                if(p.second-p.first==1)
                q.push(mp(p.second,p.second));
                else
                {
                    if((p.second-p.first+1)&1)
                    {
                        ll tmp=(p.second+p.first)/2;
                        q.push(mp(p.first,tmp-1)),q.push(mp(tmp+1,p.second));
                    }
                    else{
                        ll tmp=(p.second+p.first-1)/2;
                        q.push(mp(p.first,tmp-1)),q.push(mp(tmp+1,p.second));
                    }

                }
                
            }
        }
        sort(all(v),comp);
        
}
int main()
{
fast
ll t=1;
cin>>t;
while(t--)
{
    u64 n;
    cin>>n;
    ans.resize(n+1);
    solve(n);
    ll cn=0LL;
    for(auto x:v){
        ll tmp=x.second-x.first+1;
        if(tmp&1)ans[(x.second+x.first)/2]=++cn;
        else ans[(x.second+x.first-1)/2]=++cn;
    }
    // for(auto x:v)cout<<x.first<<" "<<x.second<<"\n";
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
    cout<<"\n";
    ans.clear();
    v.clear();
    
}
} 
