/*
Contest Id: 1436
Submission Id: 108283659
Date & Time: 23/02/2021 16:09:16
Tags/Concept used: ['math']
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll x,sum=0;
        for(int i=0;i<n;i++)cin>>x,sum+=x;
        if(sum==m)cout<<"YES\n";
        else cout<<"NO\n";
    }
}