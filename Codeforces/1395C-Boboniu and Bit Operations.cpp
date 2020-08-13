// By "ANKI"
// Concept used: bitmask, brute force

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
#define lim 1000000007
typedef unsigned long long ull;
#define M 1000006
#define F first
#define S second
using u64= uint64_t;
 


int main()
{
fast
ll t=1LL;
// cin>>t;

while(t--)
{

ll x,y;
cin>>x>>y;
vector<ll>a(x),b(y);
for(auto &x:a)cin>>x;
for(auto &x:b)cin>>x;
ll ans=513;
for(int k=0;k<=512;k++){
    bool f=true;
    for(auto i:a){
        f=false;
        for(auto j:b){
            if(((i&j)|k )==k){f=true;break;}
        }
        if(f)continue;
        else break;
    }
    if(f)ans=min(ans,(ll)k);
}
cout<<ans<<"\n";
}
} 
