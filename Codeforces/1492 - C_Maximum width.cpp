/*
Contest Id: 1492
Submission Id: 108385142
Date & Time: 24/02/2021 15:43:14
Tags/Concept used: ['binary search', 'data structures', 'dp', 'greedy', 'two pointers']
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
    string a,b;
    cin>>a>>b;
    vector<ll>x(m),y(m);
    int i=0,j=0;
    while(i<n && j<m){
        while(a[i]!=b[j])i++;
        x[j]=i;
        i++,j++;
    }
    i=n-1,j=m-1;
    while(i>=0 && j>=0){
        while(a[i]!=b[j])i--;
        y[j]=i;
        i--,j--;
    }
    ll ans=0;
    // for(auto k:x)cout<<k<<" ";
    // cout<<"\n";
    // for(auto k:y)cout<<k<<" ";
    // cout<<"\n";
    for(int k=1;k<m;k++)ans=max(ans,abs(y[k]-x[k-1]));
    cout<<ans<<"\n";

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
// cin>>t;
while(t--)
{
solve();  

}
 
} 