//  By 'Anki'
//  Concept used: brute force, two pointer
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
#define lim 10000000000012LL
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
vector<ll>v(n);
for(auto &x:v)cin>>x;
vector<ll>tmp((n+1)*(n+1),0);
for(int i=2;i<=2*n;i++){
    map<ll,ll>m;
    for(auto x:v)m[x]++;
    for(int j=1;j<=n;j++){
        if(m[i-j] && m[j]){
            ll k;
            if(j==(i-j))k=m[j]/2;
            else k=min(m[i-j],m[j]);
            m[j]-=k;
            m[i-j]-=k;
            tmp[i]+=k;
        }
    }
    // wr(tmp[i])
}
cout<<*max_element(all(tmp))<<"\n";
}
} 
