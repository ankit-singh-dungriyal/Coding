/*
Contest Id: 1141
Submission Id: 111798569
Date & Time: 02/04/2021 20:45:39
Tags/Concept used: ['greedy', 'implementation']
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
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<vector<ll>>x(27),y(27);
    for(int i=0;i<n;i++){
        if(a[i]=='?')x[26].pb(i+1);
        else x[a[i]-'a'].pb(i+1);
        if(b[i]=='?')y[26].pb(i+1);
        else y[b[i]-'a'].pb(i+1);
    }
    vector<pair<ll,ll>>ans;
    for(int i=0;i<26;i++){
        while(!x[i].empty() && !y[i].empty()){
            ans.pb(mp(x[i].back(),y[i].back()));
            x[i].pop_back();
            y[i].pop_back();
        }
    }
    for(int i=0;i<26;i++){
        while(!x[i].empty() && !y[26].empty()){
            ans.pb(mp(x[i].back(),y[26].back()));
            x[i].pop_back();
            y[26].pop_back();
        }
        while(!y[i].empty() && !x[26].empty()){
            ans.pb(mp(x[26].back(),y[i].back()));
            x[26].pop_back();
            y[i].pop_back();
        }
    }
    while(!x[26].empty() && !y[26].empty()){
        ans.pb(mp(x[26].back(),y[26].back()));
        x[26].pop_back();
        y[26].pop_back();
    }
    cout<<ans.size()<<"\n";
    for(auto &[i,j]:ans)cout<<i<<" "<<j<<"\n";
   
    
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
// cin>>t;


while(t--)
{
solve();  

}
 
} 