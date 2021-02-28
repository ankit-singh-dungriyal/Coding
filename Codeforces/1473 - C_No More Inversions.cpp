/*
Contest Id: 1473
Submission Id: 108658432
Date & Time: 28/02/2021 16:01:42
Tags/Concept used: ['constructive algorithms', 'math']
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
    ll n,k;
    cin>>n>>k;
    vector<ll>ans(k);
    for(int i=1;i<=k;i++)ans[i-1]=i;
    int p=k-1-(n-k);
    swap(ans[k-1],ans[p]);
    sort(ans.begin()+p+1,ans.end(),greater<ll>());
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