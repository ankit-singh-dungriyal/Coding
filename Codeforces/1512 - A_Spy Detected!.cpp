/*
Contest Id: 1512
Submission Id: 112981093
Date & Time: 14/04/2021 12:06:17
Tags/Concept used: ['brute force', 'implementation']
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
    vector<ll>v(n);
    map<ll,ll>m;
    for(auto &x:v)cin>>x,m[x]++;
    for(int i=0;i<n;i++){
        if(m[v[i]]==1){
            cout<<i+1<<"\n";
            return;
        }
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