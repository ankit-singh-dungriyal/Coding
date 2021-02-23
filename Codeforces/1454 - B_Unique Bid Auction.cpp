/*
Contest Id: 1454
Submission Id: 106521022
Date & Time: 05/02/2021 15:31:19
Tags/Concept used: ['implementation']
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
    vector<pair<ll,ll>>v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.pb(mp(x,i+1));
    }
    sort(all(v));
    v.pb(mp(mod,n+1));
    for(int i=0;i<n;i++){
        if(v[i].F!=v[i+1].F){
            cout<<v[i].S<<"\n";
            return ;
        }
        else{
            while(v[i].F==v[i+1].F)i++;
        }
    }
    cout<<"-1\n";
    
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