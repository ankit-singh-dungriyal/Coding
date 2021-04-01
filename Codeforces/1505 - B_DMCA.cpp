/*
Contest Id: 1505
Submission Id: 111677726
Date & Time: 01/04/2021 20:29:20
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
   ll n;
   cin>>n;
   string s=to_string(n);
   while(s.length()!=1){
       ll x=stoi(s);
       ll tmp=0;
       while(x)tmp+=(x%10),x/=10;
       s=to_string(tmp);
   }
   cout<<s<<"\n";
    
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