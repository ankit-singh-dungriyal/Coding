/*
Contest Id: 1203
Submission Id: 116033218
Date & Time: 12/05/2021 19:37:44
Tags/Concept used: ['implementation']
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

   for(int i=1;i<n;i++){
       ll tmp=abs(v[i]-v[i-1]);
       if(tmp!=1 && tmp!=n-1){
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