/*
Contest Id: 1472
Submission Id: 108468271
Date & Time: 25/02/2021 16:31:13
Tags/Concept used: ['dp', 'games', 'greedy', 'sortings']
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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    vector<ll>a,b;
    for(auto x:v){
        if(x&1)b.pb(x);
        else a.pb(x);
    }
    sort(all(a),greater<ll>());
    sort(all(b),greater<ll>());
    int i=0,j=0;
    bool f=true;
    ll cn1=0,cn2=0;
    while(i<a.size() && j<b.size()){
        if(f){
            if(a[i]>b[j])cn1+=a[i++];
            else j++;
            f=!f;
        }
        else{
            if(b[j]>a[i])cn2+=b[j++];
            else i++;
            f=!f;
        }
    }
    if(f){
        while(i<a.size())cn1+=a[i],i+=2;
        j++;
        while(j<b.size())cn2+=b[j],j+=2;
    }
    else
    {
        i++;
        while(i<a.size())cn1+=a[i],i+=2;
        while(j<b.size())cn2+=b[j],j+=2;
    }

    if(cn1==cn2)cout<<"Tie\n";
    else if(cn1>cn2)cout<<"Alice\n";
    else cout<<"Bob\n";
    

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