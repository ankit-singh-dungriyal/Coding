/*
Contest Id: 1455
Submission Id: 106667172
Date & Time: 06/02/2021 16:08:21
Tags/Concept used: ['dp', 'greedy', 'sortings']
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
#define lim 1000000000000000000LL
typedef unsigned long long ull;
#define mod 1000000007
#define M 31
#define N 30
#define F first
#define S second
using u64= uint64_t;

void solve(){
    
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    ll ans=0;
    bool f=true;
    for(int i=0;i<n;i++){
        f=true;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[j-1]){
                f=false;
                break;
            }
        }
        if(f)break;
        int j=i;
        while(j<n){
            if(v[j]>k){
                swap(v[j],k);
                ans++;
                break;
            }
            j++;
        }
        i=j;

    }
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            f=false;
            break;
        }
    }
    // for(int i=0;i<n;i++)cout<<v[i]<<" ";
    // cout<<" , ";
    if(f)cout<<ans<<"\n";
    else cout<<"-1\n";
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