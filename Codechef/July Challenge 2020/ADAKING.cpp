
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
#define M 10004
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
   char ans[8][8];
   for(int i=0;i<8;i++)for(int j=0;j<8;j++)ans[i][j]='X';
   for(int i=0;i<8;i++){for(int j=0;j<8;j++){
       ans[i][j]='.';
       if(!(--n))break;
   }
   if(!n)break;
   }
   ans[0][0]='O';
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++)cout<<ans[i][j];
        cout<<"\n";
    }
    cout<<"\n";
}
} 
