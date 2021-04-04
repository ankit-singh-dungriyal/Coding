/*
Contest Id: 1504
Submission Id: 111878264
Date & Time: 03/04/2021 20:17:50
Tags/Concept used: ['constructive algorithms', 'strings']
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


bool ispalin(string &s){
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[i++]!=s[j--])return false;
    }
    return true;
}

void solve(){
    string s;
    cin>>s;
    ll n=s.length();
        ll cn=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a')cn++;
        }
        if(cn==n){
            cout<<"NO\n";
            return;
        }
        cout<<"YES\n";
        string ans=s;
        ans+='a';
        if(ispalin(ans)){
            ans='a';
            ans+=s;
            cout<<ans<<"\n";
        }
        else cout<<ans<<"\n";
    
    
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