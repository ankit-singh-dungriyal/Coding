/*
Contest Id: 1451
Submission Id: 106443857
Date & Time: 04/02/2021 16:06:59
Tags/Concept used: ['dp', 'greedy', 'hashing', 'implementation', 'strings']
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
    string s,r;
    cin>>s>>r;
    vector<ll>pre(26,0),req(26,0);
    for(int i=0;i<n;i++)pre[s[i]-'a']++,req[r[i]-'a']++;
    for(int i=0;i<26;i++){
        if(req[i]>pre[i])req[i]-=pre[i],pre[i]=0;
        else pre[i]-=req[i],req[i]=0;
    }
    for(int i=0;i<26;i++)if(pre[i]%k!=0 || req[i]%k!=0){cout<<"No\n";return;}
    for(int i=25;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if(req[i]>pre[j])req[i]-=pre[j],pre[j]=0;
            else pre[j]-=req[i],req[i]=0;
        }
    }
    for(int i=0;i<26;i++)if(req[i]){
        // wr(req[i])
        cout<<"No\n";
        return;
    }
    cout<<"Yes\n";
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