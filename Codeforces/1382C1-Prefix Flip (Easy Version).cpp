// By 'Anki'
// Concept used: constructive algorithm, string

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
 
vector<bool>a(n),b(n);
for(int i=0;i<n;i++){
    if(s1[i]=='0')a[i]=0;
    else a[i]=1;
    if(s2[i]=='0')b[i]=0;
    else b[i]=1;
}
for(int i=n-1;i>=0;i--){
    if(a[i]==b[i])continue;
    if(a[0]==b[i])ans.pb(1),a[0]=!a[0];
    vector<bool>tmp;
    for(int j=0;j<=i;j++)tmp.pb(!a[j]);
    reverse(all(tmp));
    for(int j=0;j<=i;j++)a[j]=tmp[j];
    ans.pb(i+1);
 
}
// for(auto x:a)cout<<x;
// cout<<"\n";
cout<<ans.size()<<" ";
for(auto x:ans)cout<<x<<" ";
cout<<"\n";
 
}
} 
 
