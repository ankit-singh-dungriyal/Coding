/*
Contest Id: 1514
Submission Id: 113493567
Date & Time: 19/04/2021 19:09:40
Tags/Concept used: ['math', 'number theory']
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
#define lim 1000000000000000000LL
typedef unsigned long long ull;
#define mod 1000000007
#define MAX 400005
#define N 10000007
#define F first
#define S second
using u64= uint64_t;

bool isPerfectSquare(long double x)
{

    if (x >= 0) {
 
        long long sr = sqrt(x);

        return (sr * sr == x);
    }
    return false;
}
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    for(auto &x:v){
        if(!isPerfectSquare(x)){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    
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