/*
Contest Id: 1351
Submission Id: 111018950
Date & Time: 25/03/2021 20:56:30
Tags/Concept used: ['data structures', 'implementation']
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
#define lim 1000000000000LL
typedef unsigned long long ull;
#define mod 1000000007
#define MAX 400005
#define N 10000007
#define F first
#define S second
using u64= uint64_t;




void solve(){
    string s;
    cin>>s;
    int x=0,y=0;
    ll ans=0;
    map<pair<pair<int,int>,pair<int,int>>,int>m;
    // m[{0,0}]=1;
    for(int i=0;i<s.length();i++){
        int a=x,b=y;
        if(s[i]=='W')x--;
        else if(s[i]=='E')x++;
        else if(s[i]=='N')y++;
        else y--;
        if(m[{{x,y},{a,b}}]||m[{{a,b},{x,y}}])ans++;
        else ans+=5;
        m[{{x,y},{a,b}}]=1;
        m[{{a,b},{x,y}}]=1;

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