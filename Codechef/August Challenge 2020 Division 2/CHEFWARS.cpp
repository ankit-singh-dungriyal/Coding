//  By 'Anki'
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
#define M 200005
using u64= uint64_t;



int main()
{
fast
ll t=1LL;
cin>>t;
while(t--)
{
ll a,b;
cin>>a>>b;
while(1){
    a=a-b;
    b=b/2;
    // wr(a)wre(b)
    if(b<=0 && a){cout<<"0\n";break;}
    if((b && a<=0)||(a<=0 && b<=0)){cout<<"1\n";break;}
}
}
} 


