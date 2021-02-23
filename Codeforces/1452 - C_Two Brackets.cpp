/*
Contest Id: 1452
Submission Id: 106359998
Date & Time: 03/02/2021 16:22:47
Tags/Concept used: ['greedy']
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
    string s;
    cin>>s;
    ll n=s.length();
    ll ans=0LL;
    vector<ll>v1(n,-1),v2(n,-1);
    ll cn1=0,cn2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(')cn1++;
        else if(s[i]=='[')cn2++;
        else if(s[i]==')'){
            cn1--;
            if(cn1>=0)ans++;
            cn1=max(0LL,cn1);
        }
        else if(s[i]==']'){
            cn2--;
            if(cn2>=0)ans++;
            cn2=max(0LL,cn2);
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