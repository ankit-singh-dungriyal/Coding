/*
Contest Id: 1486
Submission Id: 111461791
Date & Time: 30/03/2021 16:09:33
Tags/Concept used: ['binary search', 'geometry', 'shortest paths', 'sortings']
*/

#include<bits/stdc++.h>
// #include<thread>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 100000000000LL
typedef unsigned long long ull;
#define mod 1000000007
#define MAX 400005
#define N 10000007
#define F first
#define S second
using u64= uint64_t;


void solve(){
    ll n,x,y;
    cin>>n;
    vector<ll>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>x>>y;
        a[i]=x,b[i]=y;
    }
    if(n&1)cout<<1<<"\n";
    else{
        sort(all(a));
        sort(all(b));
        int k=n/2;
        ll ans=(a[k]-a[k-1]+1)*(b[k]-b[k-1]+1);
        cout<<ans<<"\n";
    }
    
    
    

return;
}

int main()
{
fast
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

ll t=1LL;
cin>>t;


while(t--)
{
solve();  

}
 
} 