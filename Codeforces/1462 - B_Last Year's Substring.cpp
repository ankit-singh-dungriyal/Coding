/*
Contest Id: 1462
Submission Id: 107046401
Date & Time: 10/02/2021 15:02:06
Tags/Concept used: ['dp', 'implementation', 'strings']
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
    string s;
    cin>>s;
    // int n=s.length();
    string str="2020";
    // cout<<s.substr(n-4,2)<<" ";
    if(n<4)cout<<"NO\n";
    else{
        if(s.substr(0,4)==str || s.substr(n-4,4)==str)cout<<"YES\n";
        else if((s.substr(0,1)=="2" && s.substr(n-3,3)=="020")||(s.substr(0,2)=="20" && s.substr(n-2,2)=="20")||(s.substr(0,3)=="202" && s.substr(n-1,1)=="0"))cout<<"YES\n";
        else cout<<"NO\n";
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