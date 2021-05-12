/*
Contest Id: 1203
Submission Id: 116043651
Date & Time: 12/05/2021 21:39:49
Tags/Concept used: ['greedy', 'implementation']
*/

#include<bits/stdc++.h>
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
#define MAX 400005
#define N 10000007
#define F first
#define S second
using u64= uint64_t;

bool isSubsequence(string s, string t) {
    int sLen = s.length(), sIdx = 0, tLen = t.length();
    for (int i=0; i<tLen && sIdx<sLen; i++) 
        if (t[i]==s[sIdx]) sIdx++;
    return sIdx==sLen;
}

void solve(){
   string s,t;
   cin>>s>>t;
   int n= s.length();
   int ans=0;
   for(int i=1;i<n;i++){
       for(int j=0;j+i<=n;j++){
           string str=s.substr(0,j)+s.substr(j+i,n-i-j);
        //    wr(str)
           if(isSubsequence(t,str))ans=i;
       }
    //    cout<<"\n";
   }
   cout<<ans<<"\n";
   

   

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