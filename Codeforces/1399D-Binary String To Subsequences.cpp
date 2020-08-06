//  By 'Anki'
// Concept used: data structure, constructive algorithms

#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 10000000000012LL
typedef unsigned long long ull;
// #define M 10004
using u64= uint64_t;



int main()
{
fast
ll t=1LL;
cin>>t;
while(t--)
{
ll n;
cin>>n;
string s;
cin>>s;
vector<ll>ans(n);
stack<ll>a[2];
for(int i=0;i<n;i++){
    if(s[i]=='0'){
        if(a[1].empty())ans[i]=a[0].size()+1,a[0].push(a[0].size());
        else ans[i]=a[1].top()+1,a[0].push(a[1].top()),a[1].pop();
    }
    else{
        if(a[0].empty())ans[i]=a[1].size()+1,a[1].push(a[1].size());
        else ans[i]=a[0].top()+1,a[1].push(a[0].top()),a[0].pop();
    }
}
cout<<a[0].size()+a[1].size()<<"\n";
for(auto x:ans)cout<<x<<" ";
cout<<"\n";
}
} 


