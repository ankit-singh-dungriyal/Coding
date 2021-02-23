/*
Contest Id: 1475
Submission Id: 108095854
Date & Time: 21/02/2021 16:17:55
Tags/Concept used: ['2-sat', 'brute force', 'constructive algorithms']
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
    char ch;
    vector<vector<int>>a(n,vector<int>(n)),b(n,vector<int>(n));
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>ch,a[i][j]=ch-'0';
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>ch,b[i][j]=ch-'0';
    for(int i=0;i<n;i++){
        if(a[0][i]==1)for(int j=0;j<n;j++)a[j][i]^=1;
        if(b[0][i]==1)for(int j=0;j<n;j++)b[j][i]^=1;
    }
    for(int i=0;i<n;i++){
        if(a[i][0]==1)for(int j=0;j<n;j++)a[i][j]^=1;
        if(b[i][0]==1)for(int j=0;j<n;j++)b[i][j]^=1;
    }
    cout<<((a==b)?"YES\n":"NO\n");


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