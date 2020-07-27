// Concept used: Binary Exponentiation, prime numbers, lcm
// 'By Anki'
 
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
#define lim 100007LL
typedef unsigned long long ull;
#define M 10004
using u64= uint64_t;
 
#define F first 
#define S second 
#define MAX 1000003 
ll mod;
  
ll prime[MAX]; 
unordered_map<ll, ll> max_map; 
  
ll power(ll a, ll n) 
{ 
    if (n == 0) 
        return 1; 
    ll p = power(a, n / 2) % mod; 
    p = (p * p) % mod; 
    if (n & 1) 
        p = (p * a) % mod; 
    return p; 
} 
 
void sieve() 
{ 
    prime[0] = prime[1] = 1; 
    for (int i = 2; i < MAX; i++) { 
        if (prime[i] == 0) { 
            for (int j = i * 2; j < MAX; j += i) { 
                if (prime[j] == 0) { 
                    prime[j] = i; 
                } 
            } 
            prime[i] = i; 
        } 
    } 
} 
ll k;
ll lcmModuloM(vector<ll>v, ll n) 
{ 
  
    for (ll i = 0; i < n; i++) { 
        ll num = v[i]; 
        unordered_map<ll, ll> temp;  
        while (num > 1) { 
            ll factor = prime[num];
            temp[factor]+=k; 
            num /= factor; 
        } 
  
        for (auto it : temp) { 
            max_map[it.first] = max(max_map[it.first], it.second); 
        } 
    } 
  
    ll ans = 1; 
  
    for (auto it : max_map) { 
        ans = (ans * power(it.F, it.S)) % mod; 
    } 
  
    return ans; 
} 
int main()
{
fast
ll t=1LL;
cin>>t;
sieve();
while(t--)
{
ll n;
cin>>n>>mod>>k;
vector<ll>v(n);
for(auto &x:v)cin>>x;
// for(int i=0;i<n;i++)v[i]=power(v[i],k);
cout<<lcmModuloM(v,n)<<"\n";
max_map.clear();
}
}
Language: C++14
