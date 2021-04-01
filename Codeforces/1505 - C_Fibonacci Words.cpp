/*
Contest Id: 1505
Submission Id: 111689157
Date & Time: 01/04/2021 20:45:17
Tags/Concept used: []
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
   string s;
   cin>>s;
   int n=s.length();
   if(n<=2){
       cout<<"YES\n";
       return;
   }
   vector<int>v;
   for(auto x:s)v.pb(x-'A');
   for(int i=2;i<n;i++){
       if(v[i]!=(v[i-1]+v[i-2])%26){
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
// cin>>t;


while(t--)
{
solve();  

}
 
} 