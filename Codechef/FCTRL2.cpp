
// By 'Anki'

// #include<boost/multiprecision/cpp_int.hpp> 
// using namespace boost::multiprecision; 

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
#define M 1003
#define N 30
#define F first
#define S second
using u64= uint64_t;



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
    ll n;
    cin>>n;
    vector<ll>v;
    v.pb(1);
    for(int i=1;i<=n;i++){
    	ll sum=0LL,carry=0LL;
    	for(int j=0;j<v.size();j++){
    		sum=v[j]*i+carry;
    		carry=sum/10;
    		sum=sum%10;
    		v[j]=sum;
    	}
    	while(carry){
    		ll d=carry%10;
    		carry/=10;
    		v.pb(d);
    	}
    }
    reverse(all(v));
    for(auto x:v)cout<<x;
    cout<<"\n";
}
}
