/*
Contest Id: 1462
Submission Id: 107045435
Date & Time: 10/02/2021 14:50:31
Tags/Concept used: ['implementation', 'two pointers']
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
    vector<ll>v(n),ans(n);
    for(auto &x:v)cin>>x;
    int i=0,j=n-1;
    int k=0;
    while(k<n){
        ans[k++]=v[i++];
        if(k==n)break;
        ans[k++]=v[j--];
    }
    for(auto x:ans)cout<<x<<" ";
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