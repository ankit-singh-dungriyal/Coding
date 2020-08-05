// By 'Anki'
// Concept used: Constructive algorithm, string

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
#define lim 10000007LL
typedef unsigned long long ull;
// #define M 10004
using u64= uint64_t;
 
 
 
int main()
{
fast
ll t=1LL;
cin>>t;
while(t--)
{
ll n;
cin>>n;
string s1,s2;
cin>>s1>>s2;
vector<ll>ans;
s1+='0';s2+='0';
for(int i=0;i<n;i++){
    if(s1[i]!=s1[i+1])ans.pb(i+1);
}
vector<ll>tmp;
// if(s1[n-1]=='1')ans.pb(n);
for(int i=0;i<n;i++){
    if(s2[i]!=s2[i+1])tmp.pb(i+1);
}
// if(s2[n-1]==1)tmp.pb(n);
reverse(all(tmp));
for(auto x:tmp)ans.pb(x);
 
// for(auto x:a)cout<<x;
// cout<<"\n";
cout<<ans.size()<<" ";
for(auto x:ans)cout<<x<<" ";
cout<<"\n";
 
}
} 
 
