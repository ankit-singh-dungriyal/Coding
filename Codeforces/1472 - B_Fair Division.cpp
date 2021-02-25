/*
Contest Id: 1472
Submission Id: 108467327
Date & Time: 25/02/2021 16:15:02
Tags/Concept used: ['dp', 'greedy', 'math']
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
    ll cn1=0,cn2=0;
    for(auto &x:v){
        cin>>x;
        if(x==1)cn1++;
        else cn2++;
    }
    
    if((cn1%2==0 && cn2%2==0)||(cn1==2*cn2)||(cn1 && cn1 %2==0 && cn2&1))cout<<"YES\n";
    else cout<<"NO\n";

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