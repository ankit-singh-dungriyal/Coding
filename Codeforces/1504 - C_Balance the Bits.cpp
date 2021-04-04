/*
Contest Id: 1504
Submission Id: 111925180
Date & Time: 03/04/2021 21:45:56
Tags/Concept used: ['constructive algorithms', 'greedy']
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

bool check(string &s){
    int n=s.length();
    int cn=0,mn=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(')cn++;
        else cn--;
        mn=min(mn,cn);
    }
    if(mn>=-1 && cn==0)return true;
    return false;
}


void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(s[0]=='0' ||s.back()=='0'){
        cout<<"NO\n";
        return;
    }
    string a="(";
    int x=0,y=0;
    for(int i=1;i<n-1;i++){
        if(s[i]=='0'){
            if(x&1)a+=')';
            else a+='(';
            x++;
        }
        else{
            if(y&1)a+=')';
            else a+='(';
            y++;
        }
    }
    a+=')';
    if(!check(a)){
        cout<<"NO\n";
        return;
    }
    string b="";
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if(a[i]==')')b+='(';
            else b+=')';
        }
        else b+=a[i];
    }
    if(!check(b)){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    cout<<a<<"\n"<<b<<"\n";

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