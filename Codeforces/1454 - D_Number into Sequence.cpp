/*
Contest Id: 1454
Submission Id: 106524990
Date & Time: 05/02/2021 16:34:55
Tags/Concept used: ['constructive algorithms', 'math', 'number theory']
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
    ll n;
    cin>>n;
    ll n1=n;
    map<ll,ll>m;
    for(ll i=2;i*i<=n;i++){
        while(n%i==0){
            m[i]++;
            n/=i;
        }
    }
    if(n>1)m[n]++;
    ll tmp=0,mn;
    for(auto x:m){
        if(x.S>tmp)mn=x.F,tmp=x.S;
        // cout<<x.F<<" "<<x.S<<" , ";
    }
    ll k=tmp;
    cout<<k<<"\n";
    // wr(k)
    for(ll i=0;i<k-1;i++)cout<<mn<<" ";
    // wr(tmp);
    if(k>1){
        ll p=n1/(pow(mn,(k-1)));
        cout<<p<<"\n";
    }
    else cout<<n1<<"\n";
    
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