//  By 'Anki'
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
#define M 200005
using u64= uint64_t;



int main()
{
fast
ll t=1LL;
cin>>t;
while(t--)
{
ll n,k,x;
cin>>n>>k;
ll test=lim;
ll ans=-1;
for(int i=0;i<n;i++){
    cin>>x;
    if(k%x==0){
        if(test>(k/x))test=k/x,ans=x;
    }
}
cout<<ans;
cout<<"\n";
}
} 


