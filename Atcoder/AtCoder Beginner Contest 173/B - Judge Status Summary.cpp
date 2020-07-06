// 'By Anki'
 
#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000007LL
typedef unsigned long long ull;
#define M 10004
using u64= uint64_t;
 
int main()
{
fast
ll t=1LL;
// cin>>t;
while(t--)
{
   ll n;
   cin>>n;
   string s;
   map<string,ll>m;
   for(int i=0;i<n;i++){
     cin>>s;
     m[s]++;
   }
   cout<<"AC x "<<m["AC"]<<"\n";
   cout<<"WA x "<<m["WA"]<<"\n";
   cout<<"TLE x "<<m["TLE"]<<"\n";
   cout<<"RE x "<<m["RE"]<<"\n";
}
} 
