/*
Contest Id: 1487
Submission Id: 111224010
Date & Time: 27/03/2021 21:09:22
Tags/Concept used: ['binary search', 'brute force', 'math', 'number theory']
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

vector<ll>v;
void pre(){
    ll i=3;
    while(i*i<lim){
        ll a=((i*i)-1)/2+1;
        v.pb(a);
        i+=2;
    }
}


void solve(){
    ll n;
    cin>>n;
    ll ans=upper_bound(all(v),n)-v.begin();
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

pre();
ll t=1LL;
cin>>t;


while(t--)
{
solve();  

}
 
} 