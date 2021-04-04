/*
Contest Id: 1504
Submission Id: 111909494
Date & Time: 03/04/2021 21:07:40
Tags/Concept used: ['constructive algorithms', 'greedy', 'implementation', 'math']
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
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<vector<ll>>x(n,vector<ll>(2,0));
    vector<ll>tmp;
    x[0][a[0]-'0']=1;
    for(int i=1;i<n;i++){
        x[i][0]=x[i-1][0];
        x[i][1]=x[i-1][1];
        x[i][a[i]-'0']++;
    }
    // for(int i=0;i<n;i++)cout<<x[i][0]<<" ";
    // cout<<"\n";
    // for(int i=0;i<n;i++)cout<<x[i][1]<<" ";

    tmp.pb(-1);
    for(int i=0;i<n;i++){
        if(x[i][0]==x[i][1])tmp.pb(i);
    }
    // tmp.pb(n-1);
    if(tmp.size()==1 && a!=b){
        cout<<"NO\n";return;
    }
    // for(auto x:tmp)cout<<x<<" ";
    for(int i=1;i<tmp.size();i++){
        bool f;
        if(a[tmp[i-1]+1]==b[tmp[i-1]+1])f=true;
        else f=false;
        for(int j=tmp[i-1]+1;j<=tmp[i];j++){
            if(f && a[j]!=b[j]){
                // wr(j)
                cout<<"NO\n";
                return;
            }
            if(!f && a[j]==b[j]){
                // wr(j)
                cout<<"NO\n";
                return;
            }
        }
    }
    for(int i=tmp[tmp.size()-1]+1;i<n;i++){
        if(a[i]!=b[i]){
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
    
    
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