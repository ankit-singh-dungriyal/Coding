/*
Contest Id: 1203
Submission Id: 116040749
Date & Time: 12/05/2021 21:06:38
Tags/Concept used: ['greedy', 'sortings']
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
   vector<ll>v(n);
   for(auto &x:v)cin>>x;
   sort(all(v));
   map<ll,ll>m;
   for(int i=0;i<n;i++){
       if(v[i]!=1 && !m[v[i]-1])m[v[i]-1]=1;
       else if(!m[v[i]])m[v[i]]=1;
       else if(!m[v[i]+1])m[v[i]+1]=1;
   }
   cout<<m.size()<<"\n";

   

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