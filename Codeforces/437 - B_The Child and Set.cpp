/*
Contest Id: 437
Submission Id: 112068409
Date & Time: 05/04/2021 16:31:30
Tags/Concept used: ['bitmasks', 'greedy', 'implementation', 'sortings']
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
    int n,k;
   cin>>n>>k;
   map<ll,vector<ll>>m;
   for(int i=1;i<=k;i++){
       int cn=0,tmp=i;
       while(tmp){
           if(tmp&1)break;
           tmp/=2;
           cn++;
       }
       m[cn].pb(i);
   }
   ll cn=0;
   vector<ll>ans;
   for(auto it=m.rbegin();it!=m.rend();it++){
       int x=it->first;
       vector<ll>v =it->second;
       int y=v.size();
       x=1<<x;
       y=min(n/x,y);
       n-=x*y;
    //    wr(y) wr(x)
       for(int i=0;i<y;i++)ans.pb(v.back()),v.pop_back();
    // cout<<it->first<<" "<<it->second<<"\n";

   }
   if(n){
       cout<<-1<<"\n";
       return;
   }
   cout<<ans.size()<<"\n";
   for(auto &x:ans)cout<<x<<" ";
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
// cin>>t;
while(t--)
{
solve();  

}
 
} 