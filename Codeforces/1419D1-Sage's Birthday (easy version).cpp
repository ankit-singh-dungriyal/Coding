// By 'Anki'

#include<bits/stdc++.h>
#include<thread>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000000000000000LL
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
ll n;
cin>>n;
vector<ll>tmp(n);
for(auto &x:tmp)cin>>x;
sort(all(tmp));
vector<ll>v(n+1,0);
ll k=0;
for(int i=2;i<=n;i+=2)v[i]=tmp[k++];
for(int i=1;i<=n;i++){
    if(v[i]==0)v[i]=tmp[k++];
}
cout<<((n-1)/2)<<"\n";
for(int i=1;i<=n;i++)cout<<v[i]<<" ";
cout<<"\n";

}

} 
