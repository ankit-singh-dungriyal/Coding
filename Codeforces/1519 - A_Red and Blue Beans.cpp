/*
Contest Id: 1519
Submission Id: 114818762
Date & Time: 02/05/2021 09:03:15
Tags/Concept used: ['math']
*/

#include<bits/stdc++.h>
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
#define mod 1000000007
#define MAX 400005
#define N 10000007
#define F first
#define S second
using u64= uint64_t;


void solve(){
    ll r,b,d;
    cin>>r>>b>>d;
    ll x=min(r,b);
    ll y=max(r,b);
    ll dif=y-x;
    if(d==0){
        if(dif==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    else{
        ll k=dif/x;
        if(dif%x!=0)k++;
        // wr(k)
        if(k<=d)cout<<"YES\n";
        else cout<<"NO\n";
    }
    


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