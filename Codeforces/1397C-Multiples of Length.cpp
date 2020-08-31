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
// cin>>t;

while(t--)
{
ll n;
cin>>n;
vector<ll>v(n);
for(auto &x:v)cin>>x;
if(n==1){
    cout<<1<<" "<<1<<"\n";
    cout<<-v[0]<<"\n";
    cout<<"1 1\n0\n1 1\n0\n";
}
else{
    cout<<"1 1\n"<<-v[0]<<"\n";
    cout<<"2 "<<n<<"\n";
    for(int i=1;i<n;i++)cout<<v[i]*(n-1)<<" ",v[i]+=v[i]*(n-1);
    cout<<"\n1 "<<n<<"\n0 ";
    for(int i=1;i<n;i++)cout<<-v[i]<<" ";
    cout<<"\n";
}


}
} 
