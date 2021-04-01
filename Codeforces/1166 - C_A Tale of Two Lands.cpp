/*
Contest Id: 1166
Submission Id: 111639435
Date & Time: 01/04/2021 17:14:11
Tags/Concept used: ['binary search', 'sortings', 'two pointers']
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
#define lim 100000000000LL
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
   vector<ll>v(n);
   for(auto &x:v)cin>>x,x=abs(x);
   sort(all(v));
   ll ans=0;
   for(int i=0;i<n;i++){
        ll k=upper_bound(all(v),2*v[i])-v.begin()-1;
        // wr(k-i)
       ans+=max(0LL,k-i);
   }
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