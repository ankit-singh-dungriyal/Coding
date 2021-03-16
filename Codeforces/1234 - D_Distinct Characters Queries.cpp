/*
Contest Id: 1234
Submission Id: 110013932
Date & Time: 15/03/2021 12:12:28
Tags/Concept used: ['data structures']
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
#define MAX 400005
#define N 10000007
#define F first
#define S second
using u64= uint64_t;

vector<vector<int>>seg(MAX,vector<int>(26));
string s;
void build(int l,int r,int i){
  if(l==r){
    seg[i][s[l]-'a']=1;
    return;
  }
  int m=(l+r)/2;
  build(l,m,2*i);
  build(m+1,r,2*i+1);
  for(int j=0;j<26;j++)seg[i][j]=seg[2*i][j]|seg[2*i+1][j];
}

vector<int> cal(int l,int r,int sl,int sr,int i){
  vector<int>c(26,0);
  if(l>r)return c;
  if(sl==l && sr==r)return seg[i];
  int sm=(sl+sr)/2;
  vector<int>a=cal(l,min(r,sm),sl,sm,2*i);
  vector<int>b=cal(max(l,sm+1),r,sm+1,sr,2*i+1);
  for(int j=0;j<26;j++)c[j]=a[j]|b[j];
  return c;
}

void update(int sl,int sr,int i,int pos,char ch,char old_ch){
  if(sl>sr)return;
  if(sl==sr){
    seg[i][old_ch-'a']=0;
    seg[i][ch-'a']=1;
    return;
  }
  int sm=(sl+sr)/2;
  if(pos<=sm)update(sl,sm,2*i,pos,ch,old_ch);
  else update(sm+1,sr,2*i+1,pos,ch,old_ch);
  for(int j=0;j<26;j++)seg[i][j]=seg[2*i][j]|seg[2*i+1][j];
  return;
}

void solve(){
  ll q;
  cin>>s;
  ll n=s.length();
  build(0,n-1,1);
  // for(int i=0;i<26;i++){
  //   for(int j=0;j<4*n;j++)cout<<seg[j][i]<<" ";
  //   cout<<"\n";
  // }
  cin>>q;
  while(q--){
    int x,l,r,pos;
    char ch;
    cin>>x;
    if(x==1){
      cin>>pos>>ch;
      pos--;
      update(0,n-1,1,pos,ch,s[pos]);
      s[pos]=ch;
      // cout<<s<<"\n";
    }
    else{
      cin>>l>>r;
      l--,r--;
      vector<int>ans=cal(l,r,0,n-1,1);
      ll res=0;
      for(auto x:ans)if(x)res++;
      cout<<res<<"\n";
    }
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
// cin>>t;

while(t--)
{
solve();  

}
 
} 