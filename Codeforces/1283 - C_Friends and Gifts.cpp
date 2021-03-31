/*
Contest Id: 1283
Submission Id: 111540973
Date & Time: 31/03/2021 14:33:01
Tags/Concept used: ['constructive algorithms', 'data structures', 'math']
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
   vector<ll>give(n);
   for(auto &x:give)cin>>x;
   vector<ll>take(n,0);
   for(int i=0;i<n;i++)if(give[i])take[give[i]-1]=i+1;
//    for(auto x:take)cout<<x<<" ";
   int pi=-1,po=-1;
   for(int i=0;i<n;i++){
       if(!give[i]){
           pi=i;
           break;
       }
   }
   for(int i=n-1;i>=0;i--){
       if(!give[i]){
           po=i;
           break;
       }
   }
   int i=0,j=n-1;
   int q=-1;
   while(i<n && j>=0){
       while(i<n && give[i])i++;
       while(j>=0 && take[j])j--;
       if(i>=n || j<0)break;
       if(i==j){
           q=i;
       }
       give[i]=j+1;
       take[j]=i+1;
       i++;
       j--;
   }
   if(q!=-1){
       if(q==pi)
       swap(give[q],give[po]);
       else 
       swap(give[q],give[pi]);
   }
   for(auto &x:give)cout<<x<<" ";

    
    

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