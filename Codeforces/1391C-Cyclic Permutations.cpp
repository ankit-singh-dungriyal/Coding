// By "ANKI"
// Concept used: Factorial, modular arithmetic

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
 

 
ll fact[M];
void facto(){
    fact[0]=1;
    fact[1]=1;
    for(int i=2;i<M;i++)fact[i]=(fact[i-1]*i)%lim;
}
int main()
{
fast
ll t=1LL;
// cin>>t;
 
facto();
ll ans[1000006];
ans[3]=2;
for(int i=4;i<M-2;i++)ans[i]=((fact[i-1]*(i-2))%lim+ans[i-1]*2)%lim;
while(t--)
{
ll n;
cin>>n;
cout<<ans[n];
}
} 
