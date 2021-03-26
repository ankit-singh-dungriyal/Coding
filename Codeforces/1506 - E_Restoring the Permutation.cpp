/*
Contest Id: 1506
Submission Id: 111124940
Date & Time: 26/03/2021 16:27:26
Tags/Concept used: ['constructive algorithms', 'data structures', 'dsu', 'greedy']
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
   vector<ll>v(n),check(n+1,0);
   for(auto &x:v)cin>>x,check[x]=1;
   set<ll>s;
   vector<ll>tmp;
   for(int i=1;i<=n;i++)if(!check[i])s.insert(i),tmp.pb(i);
   vector<ll>a,b;
   int k=0;
   a.pb(v[0]);
   for(int i=1;i<n;i++){
       while(v[i]==v[i-1])a.pb(tmp[k++]),i++;
       if(i<n)
       a.pb(v[i]);
   }

   b.pb(v[0]);
   for(int i=1;i<n;i++){
       while(v[i]==v[i-1]){
           auto it=s.upper_bound(v[i]);
        //    wr(*it);
           if(it!=s.begin())it--;
           b.pb(*it);
           s.erase(it);
           i++;
       }
       if(i<n)b.pb(v[i]);
   }


   for(auto x:a)cout<<x<<" ";
   cout<<"\n";
   for(auto x:b)cout<<x<<" ";
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