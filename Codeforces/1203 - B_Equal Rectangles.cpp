/*
Contest Id: 1203
Submission Id: 116035616
Date & Time: 12/05/2021 20:06:28
Tags/Concept used: ['greedy', 'math']
*/

#include<bits/stdc++.h>
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
#define MAX 400005
#define N 10000007
#define F first
#define S second
using u64= uint64_t;



void solve(){
   ll n;
   cin>>n;
   vector<ll>v(4*n);
   unordered_map<ll,ll>m;
   for(auto &x:v)cin>>x,m[x]++;
   for(auto x:m){
       if(x.S &1){
           cout<<"NO\n";
           return;
       }
   }
   sort(all(v));
   ll tmp=v[0]*v[4*n-1];
//    for(auto &x:v)cout<<x<<" ";
   for(int i=0;i<2*n;i+=2){
       if(v[i]*v[4*n-i-1]!=tmp){
           cout<<"NO\n";
           return;
       }
   }
   cout<<"YES\n";

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