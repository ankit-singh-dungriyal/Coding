/*
Contest Id: 1498
Submission Id: 111432002
Date & Time: 30/03/2021 09:08:20
Tags/Concept used: ['binary search', 'bitmasks', 'data structures', 'greedy']
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
    ll n,w;
    cin>>n>>w;
    ll x;
    multiset<ll>s;
    for(int i=0;i<n;i++)cin>>x,s.insert(x);
    ll ans=1,tmp=w;
    while(!s.empty()){
        auto it=s.lower_bound(tmp+1);
        if(it==s.begin()){
            ans++;
            tmp=w;
        }
        else{
            it--;
            tmp-=*it;
            s.erase(it);
        }
    }
    cout<<ans<<"\n";
    
    
    

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