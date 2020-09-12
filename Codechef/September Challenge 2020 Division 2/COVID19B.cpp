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
vector<float>v(n);
for(auto &x:v)cin>>x;
ll mn=n+1,mx=1;
vector<vector<float>>k(n,vector<float>(n));
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(v[i]==v[j])k[i][j]=0;
        else if(j>i)
        k[i][j]=float(j-i)/float(v[i]-v[j]);
        else k[i][j]=float(i-j)/float(v[j]-v[i]);
    }
}

// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++)cout<<k[i][j]<<" ";
//     cout<<"\n";
// }
// cout<<"\n\n";
ll ans=1;
for(int i=0;i<n;i++){
    ans=1LL;
    for(int j=0;j<n;j++){
        if(k[i][j]>0)ans++;
        else if(i!=j){
            for(int l=0;l<n;l++)if( k[j][l]>0 && k[i][l]>0 && k[j][l]>k[i][l]){ans++;break;}
        }
    }
    mx=max(mx,ans);
    mn=min(mn,ans);
}

cout<<mn<<" "<<mx<<"\n";
// cout<<"@@\n";
}
} 
