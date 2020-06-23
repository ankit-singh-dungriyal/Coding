// D. Ant on the Tree (Codeforces Beta Round #29 (Div. 2, Codeforces format))
// Concept used : dfs
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
#define lim 1000000007LL
typedef unsigned long long ull;
#define M 200005
using u64= uint64_t;


vector<ll>v[300];
vector<bool>vis(300);
vector<ll>ans,tmp,tmp_ans;

bool dfs(ll fr,ll to){
    if(fr==to){
      tmp_ans.pb(fr);return true;
    }
    vis[fr]=true;
    for(auto x:v[fr]){
      if(!vis[x]){
          vis[x]=true;
          if(dfs(x,to)){
            tmp_ans.pb(x);
            return true;
          }
      }
    }
    return false;
}
 
 
int main()
{
fast
ll t=1LL;
// cin>>t;
while(t--)
{
  ll n;
  cin>>n;
  ll x,y;
  for(int i=1;i<n;i++){
    cin>>x>>y;
    v[--x].pb(--y),v[y].pb(x);
  }
  ll q=0LL;
  for(int i=1;i<n;i++)if(v[i].size()==1)q++;
  tmp.pb(0);
  for(int i=0;i<q;i++){cin>>x;tmp.pb(--x);}
  tmp.pb(0);
  ans.pb(1);
  for(int i=0;i<tmp.size()-1;i++){
    vis.assign(n+1,false);
    if(dfs(tmp[i],tmp[i+1])){
      reverse(all(tmp_ans));
      for(auto x:tmp_ans)ans.pb(x+1);
      ans.pop_back();
      tmp_ans.clear();
    }
  }
  if(ans.size()==2*n-1){
    for(auto x:ans)cout<<x<<" ";
    cout<<"\n";
  }
  else cout<<"-1\n";
}
} 
