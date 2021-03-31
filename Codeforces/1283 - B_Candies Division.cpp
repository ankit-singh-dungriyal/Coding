/*
Contest Id: 1283
Submission Id: 111539122
Date & Time: 31/03/2021 14:09:25
Tags/Concept used: ['math']
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
   ll a,b;
   cin>>a>>b;
   ll tmp=a%b;
   tmp=min(tmp,b/2);
   ll ans=(a/b)*b+tmp;
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