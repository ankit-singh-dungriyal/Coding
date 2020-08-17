//  By 'Anki'
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
#define lim 10000000000012LL
typedef unsigned long long ull;
#define M 200005
using u64= uint64_t;



int main()
{
fast
ll t=1LL;
cin>>t;
while(t--)
{
string str,s;
cin>>str>>s;
ll cnt[26]={0};
for(int i=0;i<str.length();i++)cnt[str[i]-'a']++;
string tmp[26];
for(int i=0;i<26;i++)tmp[i]="";
for(int i=0;i<s.length();i++)cnt[s[i]-'a']--;
for(int i=0;i<26;i++){
    for(int j=0;j<cnt[i];j++)tmp[i]+=(char)(i+'a');
    // tmp[i]+=p;
}
string ans="";
bool f=true;
for(int i=0;i<s.length()-1;i++){
    if(s[i+1]==s[i])continue;
    if(s[i+1]<s[i]){f=false;break;}
    else break;
}
if(f)
{
for(int i=0;i<=s[0]-'a';i++)ans+=tmp[i];
ans+=s;
for(int i=s[0]-'a'+1;i<26;i++)ans+=tmp[i];
}
else{
    for(int i=0;i<s[0]-'a';i++)ans+=tmp[i];
ans+=s;
for(int i=s[0]-'a';i<26;i++)ans+=tmp[i];
}
cout<<ans<<"\n";
}
} 


