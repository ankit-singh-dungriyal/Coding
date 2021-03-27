/*
Contest Id: 1506
Submission Id: 111197193
Date & Time: 27/03/2021 14:31:39
Tags/Concept used: ['greedy', 'implementation']
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
   ll n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   ll cn=0;
   vector<ll>v;
   for(int i=0;i<n;i++){
       if(s[i]=='*')cn++,v.pb(i);
   }
   if(cn<=2)cout<<cn<<"\n";
   else{
   	ll ans=2;
   	ll pos=v[0];
   	for(int i=1;i<v.size();i++){
   		if(v[i]-pos==k)ans++,pos=v[i];
   		else if(v[i]-pos>k)ans++,pos=v[--i];
   	}
   	if(pos==v.back())ans--;
   	cout<<ans<<"\n";
   }

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