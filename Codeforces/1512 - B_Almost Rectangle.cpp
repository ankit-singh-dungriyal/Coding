/*
Contest Id: 1512
Submission Id: 112982339
Date & Time: 14/04/2021 12:23:08
Tags/Concept used: ['implementation']
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


void solve(){
    ll n;
    cin>>n;
    char ch;
    vector<pair<ll,ll>>v;
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ch;
            arr[i][j]=ch;
            if(ch=='*')v.pb(mp(i,j));
        }
    }
    ll x1,x2,y1,y2;
    x1=v[0].first,x2=v[1].first;
    y1=v[0].second,y2=v[1].second;
        // wr(x1)wr(y1)wr(x2)wre(y2)
    ll a1=x1,a2=x2,b1=y1,b2=y2;
    if(x1==x2){
        if(x1>0)a1=x1-1,a2=x1-1;
        else a1=x1+1,a2=x1+1;
    }
    else if(y1==y2){
        if(y1>0)b1=y1-1,b2=y1-1;
        else b1=y1+1,b2=y1+1;
    }
    else{
        a1=x2,b1=y1,a2=x1,b2=y2;
    }
    // wr(a1)wr(b1)wr(a2)wre(b2)

    arr[a1][b1]='*';
    arr[a2][b2]='*';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
  
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