/*
Contest Id: 1512
Submission Id: 112985102
Date & Time: 14/04/2021 12:58:06
Tags/Concept used: ['constructive algorithms', 'data structures', 'greedy']
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
     n+=2;
     vector<ll>v(n);
     vector<ll>sum(n);
     for(auto &x:v)cin>>x;
     sort(all(v));
     sum[0]=v[0];
     for(int i=1;i<n;i++){
         sum[i]=sum[i-1]+v[i];
     }
     if(sum[n-3]==v[n-2]){
         for(int i=0;i<n-2;i++)cout<<v[i]<<" ";
        //  wr(-1)
         cout<<"\n";
         return;
     }
     else {
         for(int i=0;i<n-1;i++){
             if(sum[n-2]-v[i]==v[n-1]){
                 for(int j=0;j<n-1;j++){
                     if(i==j)continue;
                     cout<<v[j]<<" ";
                 }
                //  wr(1)
                 cout<<"\n";
                 return;
             }
         }
     }
     cout<<-1<<"\n";

  
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