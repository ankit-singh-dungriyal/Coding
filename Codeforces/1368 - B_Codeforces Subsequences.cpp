/*
Contest Id: 1368
Submission Id: 111637617
Date & Time: 01/04/2021 16:54:16
Tags/Concept used: ['brute force', 'constructive algorithms', 'greedy', 'math', 'strings']
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
   vector<ll>v(10,1);
   ll tmp=1;
   while(tmp<n){
       for(int j=0;j<10;j++){
           tmp/=v[j];
           v[j]++;
           tmp*=v[j];
           if(tmp>=n)break;
       }
   }
   string s="codeforces";
   string ans="";
   for(int j=0;j<10;j++){
       for(int i=0;i<v[j];i++)ans+=s[j];
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
// cin>>t;


while(t--)
{
solve();  

}
 
} 