/*
Contest Id: 1110
Submission Id: 111776101
Date & Time: 02/04/2021 15:46:21
Tags/Concept used: ['constructive algorithms', 'math', 'number theory']
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

bool isptwo(ll x){
    return (x&&(!(x&(x-1))));
}
bool ispfour(ll x){
    return (isptwo(x)&&(x-1)%3==0);
}

void solve(){
    ll n;
    cin>>n;   
    if(isptwo(n+1)){
        ll ans=1;
        for(ll i=2;i<=sqrt(n);i++){
            if(n%i==0){
                ans=max(ans,n/i);
                ans=max(ans,i);
            }
        }
        cout<<ans<<"\n";
    }
    else{
        ll ans=0;
        while(n)n/=2,ans++;
        cout<<(1<<ans)-1<<"\n";
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