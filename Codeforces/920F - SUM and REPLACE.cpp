// Concept used: segment tree

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
#define lim 10000007LL
typedef unsigned long long ull;
#define M 1000006
#define F first
#define S second
using u64= uint64_t;


ll divi[M];
vector<ll>v;
vector<ll>seg(4*M),maxi(4*M);
void count_div(){
  memset(divi,0,sizeof(divi));
  for(int i=1;i<M;i++){
    for(int j=i;j<M;j+=i)divi[j]++;
  }
}

void build_seg(int l,int r,int i){
  if(l>r)return;
  if(l==r)seg[i]=v[l],maxi[i]=v[l];
  else{
    int m=(l+r)/2;
    build_seg(l,m,i<<1);
    build_seg(m+1,r,i<<1|1);
    seg[i]=seg[i<<1]+seg[i<<1|1];
    maxi[i]=max(maxi[i<<1],maxi[i<<1|1]);
  }
}

void update_range(int st,int en,int i,int l , int r){
  if(maxi[i]<=2|| l>r)return;
  if(st==en)seg[i]=divi[maxi[i]],maxi[i]=divi[maxi[i]];
  else{
    int mid=(st+en)/2;
    update_range(st,mid,i<<1,l,min(mid,r));
    update_range(mid+1,en,i<<1|1,max(l,mid+1),r);
    seg[i]=seg[i<<1]+seg[i<<1|1];
    maxi[i]=max(maxi[i<<1],maxi[i<<1|1]);
  }
}

ll sum_range(int st,int en,int i, int l, int r){
  if(l>r)return 0;
  if(l==st && r==en)return seg[i];
  else{
    int mid=(st+en)/2;
    return sum_range(st,mid,i<<1,l,min(r,mid))+sum_range(mid+1,en,i<<1|1,max(l,mid+1),r);
  }
}

int main()
{
fast
ll t=1LL;
// cin>>t;
count_div();
// for(int i=1;i<=10;i++)cout<<divi[i]<<" ";
while(t--)
{
  ll n,m;
  cin>>n>>m;
  v.resize(n);
  for(auto &x:v)cin>>x;
  build_seg(0,n-1,1);
  int q,l,r;
  for(int i=0;i<m;i++){
    cin>>q>>l>>r;
    if(q==1)update_range(0,n-1,1,--l,--r);
    else cout<<sum_range(0,n-1,1,--l,--r)<<"\n";
  }

}
} 
