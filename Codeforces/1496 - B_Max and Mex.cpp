/*
Contest Id: 1496
Submission Id: 109958370
Date & Time: 14/03/2021 15:10:35
Tags/Concept used: ['implementation', 'math']
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
#define M 31
#define N 10000007
#define F first
#define S second
using u64= uint64_t;


bool ispalin(string s){
  int i=0,j=s.length()-1;
  while(i<j)if(s[i++]!=s[j--])return false;
  return true;
}

void solve(){
  ll n,k;
  cin>>n>>k;
  vector<ll>v(n);
  map<ll,ll>m;
  for(auto &x:v)cin>>x,m[x]=1;
  if(!k){
    cout<<n<<"\n";
    return;
  }
  sort(all(v));
  int p=-1;
  for(int i=0;i<n;i++)if(v[i]!=i){
    p=i;
    break;
  }
  if(p==-1){
    cout<<n+k<<"\n";
    return;
  }
  ll tmp=(v[n-1]+p+1)/2;
  if(m[tmp]){
    // wr(tmp)
    cout<<n<<"\n";
  }
  else{
    cout<<n+1<<"\n";
  }
  
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