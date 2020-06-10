// Concept used: Fenwick tree, Range sum, update queries.
// 'By Anki'
 
#include<bits/stdc++.h>
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
#define M 1000000000L
using u64= uint64_t;
 

ll a[1000006];
ll n;
void fenwick(ll c)
{
    a[0]=0LL;
    for(int i=1;i<=n;i++)a[i]=c;
    for(int i=1;i<=n;i++)
    {
        int j=i+(i&(-i));
        if(j<=n)a[j]+=a[i];
    }
}
void add(ll x,ll val){
    for(;x<=n;x+=x &(-x))a[x]+=val;
}
void add_range(ll l,ll r,ll val){
    add(l,val);
    add(r+1,-val);
}
ll query(ll x)
{
    ll res=0LL;
    for(x;x>0;x-=x&(-x))res+=a[x];
    return res;
}

int main()
{
fast
ll t=1LL;

for(;t;t--){
    ll m,c;
    cin>>n>>m>>c;
    // fenwick(c);
    memset(a,0,sizeof(a));
    
    while (m--)
    {
        char ch;
        ll l,r,x;
        cin>>ch;
        if(ch=='Q'){
            cin>>l;
            cout<<query(l)+c<<"\n";
        }
        else
        {
            cin>>l>>r>>x;
            add_range(l,r,x);
        }
        // for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    // cout<<"\n";
        
    }
    
}
}
