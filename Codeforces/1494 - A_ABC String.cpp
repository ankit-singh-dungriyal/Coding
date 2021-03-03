/*
Contest Id: 1494
Submission Id: 108990295
Date & Time: 03/03/2021 14:29:44
Tags/Concept used: ['bitmasks', 'brute force', 'implementation']
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


bool check(string s){
  ll n=s.length();
  int sum=0;
  for(auto x:s){
    if(x=='(')sum++;
    else sum--;
    if(sum<0)return false;
  }
  if(sum>0)return false;
  return true;
}



void solve(){
    string s;
    cin>>s;
    ll n=s.length();
    if(s[0]==s[n-1]){
      cout<<"No\n";
      return;
    }
    string tmp=s;
    for(int i=0;i<n;i++){
      if(s[i]==s[0])tmp[i]='(';
      else if(s[i]==s[n-1])tmp[i]=')';
    }
    string k=tmp;
    for(auto &x:k)if(x!='(' && x!=')')x='(';
    if(check(k)){
      cout<<"Yes\n";
      return;
    }
    k=tmp;
    for(auto &x:k)if(x!='(' && x!=')')x=')';
    if(check(k)){
      cout<<"Yes\n";
      return;
    }
    cout<<"No\n";

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