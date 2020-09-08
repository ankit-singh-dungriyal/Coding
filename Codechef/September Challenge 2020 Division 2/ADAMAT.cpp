// By 'Anki'

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000000000000LL
typedef unsigned long long ull;
#define M 200005LL
#define F first
#define S second
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
ll a[n][n];
for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>a[i][j];
ll ans=0LL;
for(int k=n-1;k>=0;k--){
    if(a[0][k]!=k+1){
        for(int i=0;i<k;i++)swap(a[0][i],a[i][0]);
        ans++;
    }
}
cout<<ans<<"\n";
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++)cout<<a[i][j]<<" ";
//     cout<<"\n";
// }

}
} 
