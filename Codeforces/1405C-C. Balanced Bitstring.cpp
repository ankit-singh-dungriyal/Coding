// By 'Anki'
// Concept used: String

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000000000000LL
typedef unsigned long long ull;
#define M 200005LL
#define F first
#define S second
using u64= uint64_t;
 

int main()
{
fast
ll t=1LL;
cin>>t;

while(t--)
{
ll n,k;
cin>>n>>k;
string s;
cin>>s;
vector<char>ch(k,'?');
bool f=true;

for(int i=0;i<n;i++)if(s[i]!='?')ch[i%k]=s[i];
for(int i=0;i<n;i++){
    if(s[i]=='?')s[i]=ch[i%k];
    else if(s[i]!=ch[i%k]){f=false;break;}
}

ll cn0=0,cn1=0;
for(int i=0;i<k;i++){
    if(s[i]=='0')cn0++;
    else if(s[i]=='1')cn1++;
}
for(int i=0;i<k;i++){
    if(s[i]=='?'){
        if(cn0<cn1)s[i]='0',cn0++;
        else s[i]='1',cn1++;
    }
}
if(cn0!=cn1){cout<<"NO\n";continue;}
for(int i=k;i<n;i++){
    if(s[i]=='?'){
        s[i]=s[i-k];
    }
}
for(int i=0;i<n;i++){
    if(i+k<n && s[i]!=s[i+k]){f=false;break;}
    else if(i-k>=0 && s[i]!=s[i-k]){f=false;break;}
}
// cout<<s<<" ";
cout<<(f?"YES\n":"NO\n");
}
} 
