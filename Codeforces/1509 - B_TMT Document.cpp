/*
Contest Id: 1509
Submission Id: 113213706
Date & Time: 16/04/2021 20:40:00
Tags/Concept used: ['greedy']
*/

#include<bits/stdc++.h>
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


ll count(string a, string b)
{
    int m = a.length();
    int n = b.length();
    int lookup[m + 1][n + 1] = { { 0 } };
    for (int i = 0; i <= n; ++i)
        lookup[0][i] = 0;

    for (int i = 0; i <= m; ++i)
        lookup[i][0] = 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i - 1] == b[j - 1])
                lookup[i][j] = lookup[i - 1][j - 1] + lookup[i - 1][j];
                 
            else
                lookup[i][j] = lookup[i - 1][j];
        }
    }
 
    return lookup[m][n];
}

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll cm=0,ct=0;
    for(int i=0;i<n;i++){
        if(s[i]=='T')ct++;
        else cm++;
    }
    if(ct&1 || (cm!=ct/2)){
        cout<<"NO\n";
        return;
    }
    ll cn=0;
    for(int i=n;i>=0;i--){
        if(s[i]=='T')s[i]='P',cn++;
        if(cn==ct/2)break;
    }

    vector<ll>tmp(cm);

    int x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        if(s[i]=='T'){
            x++;

        }
        else if(s[i]=='M'){
            y=min(y+1,x);
        }
        else z=min(z+1,y);
    }

    if(x==y && y==z && x==n/3)cout<<"YES\n";
    else cout<<"NO\n";



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