
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
ll res=0LL;
for(int i=2;i<=1000000;i++){
    ll j=i;
    bool f=true;
    ll tmp=1;
    while(j){
        if(j%10==1 || j%10==0){f=false;break;}
        else tmp*=(j%10);
        j/=10;
    }
    if(tmp==n && f)res++;
}
cout<<res<<"\n";
}
} 
