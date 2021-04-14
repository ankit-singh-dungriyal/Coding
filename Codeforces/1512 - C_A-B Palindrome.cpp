/*
Contest Id: 1512
Submission Id: 112983906
Date & Time: 14/04/2021 12:42:32
Tags/Concept used: ['constructive algorithms', 'implementation', 'strings']
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
        if(s[i]!=s[j])return false;
        i++;
        j--;
    }
    return true;
}

void solve(){
    ll a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    if((a&1) && (b&1)){
        cout<<-1<<"\n";
        return;
    }
    ll n=a+b;
    ll i=0,j=n-1;
    while(i<j){
        if(s[i]=='?'&& s[j]!='?')s[i]=s[j];
        else if(s[i]!='?' && s[j]=='?')s[j]=s[i];
        i++;
        j--;
    }
    ll one=0,zero=0;
    for(char ch:s){
        if(ch=='0')a--;
        else if(ch=='1')b--;
    }
    i=0,j=n-1;
    while(i<j){
        if(s[i]=='?'){
            if(a>1){
                s[i]='0';
                s[j]='0';
                a-=2;
            }
            else if(b>1){
                s[i]='1';
                s[j]='1';
                b-=2;
            }
        }
        i++;
        j--;
    }
    if(n&1 && s[n/2]=='?'){
        if(a>0)s[n/2]='0',a--;
        else if(b>0)s[n/2]='1',b--;
    }
    if(a>0 || b>0){
        cout<<-1<<"\n";
        return;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='?'){
            cout<<-1<<"\n";
            return;
        }
    }
    if(!ispalin(s)){
        cout<<-1<<"\n";
        return;
    }
    cout<<s<<"\n";

  
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