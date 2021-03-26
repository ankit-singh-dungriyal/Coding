/*
Contest Id: 1506
Submission Id: 111119813
Date & Time: 26/03/2021 15:26:12
Tags/Concept used: ['brute force', 'dp', 'hashing', 'strings']
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
   string a,b;
   cin>>a>>b;
   int n=a.length();
   int m=b.length();
   ll dp[n+1][m+1];
   ll res=0;
   for(int i=0;i<=n;i++){
       for(int j=0;j<=m;j++){
           if(i==0 ||j==0)dp[i][j]=0;
           else if(a[i-1]==b[j-1]){
               dp[i][j]=dp[i-1][j-1]+1;
               res=max(res,dp[i][j]);
           }
           else dp[i][j]=0;
       }
   }
//    wr(res)
    ll ans=m+n-2*res;
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