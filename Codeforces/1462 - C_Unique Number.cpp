/*
Contest Id: 1462
Submission Id: 107048168
Date & Time: 10/02/2021 15:25:25
Tags/Concept used: ['brute force', 'greedy', 'math']
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
    vector<int>v(10);
    for(int i=0;i<10;i++)v[i]=i;
    int k=0;
    ll ans=mod;
    while(k<1024){
        int i=k;
        ll sum=0;
        int cn=0;
        while(i){
            if(i&1)sum+=v[cn];
            cn++;
            i/=2;
        }
        if(sum==n){
            vector<int>tmp;
            int j=k;
            cn=0;
            while(j){
                if(j&1)tmp.pb(cn);
                cn++;
                j/=2;
            }
            sort(all(tmp));
            ll p=0;
            for(auto x:tmp)p=p*10+x;
            ans=min(ans,p);
        }
        k++;
    }
    if(ans==mod)cout<<-1;
    else cout<<ans;
    cout<<"\n";
   
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