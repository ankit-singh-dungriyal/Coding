/*
Contest Id: 1499
Submission Id: 111221466
Date & Time: 27/03/2021 20:28:34
Tags/Concept used: ['brute force', 'data structures', 'greedy', 'math']
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
#define lim 1000000000000LL
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
   for(auto &x:v)cin>>x;
   ll ans=(v[0]+v[1])*n;
   ll mne=v[0],mno=v[1],sume=v[0],sumo=v[1];
   for(int i=2;i<n;i++){
       if(i&1)mno=min(mno,v[i]),sumo+=v[i];
       else mne=min(mne,v[i]),sume+=v[i];
       ll ne=(i+2)/2,no=(i+1)/2;
    //    wr(sume)
    // wr(no)wr(ne)
       ans=min(ans,sume-mne+(n-ne+1)*mne+sumo-mno+(n-no+1)*mno);
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
cin>>t;

while(t--)
{
solve();  

}
 
} 