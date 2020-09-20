// By 'Anki'

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define po pop_back
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define wr(i) cout<<#i<<"= "<<i<<", ";
#define wre(i) cout<<#i<<" = "<<i<<" ,\n";
#define mp make_pair
typedef long long ll;

int main(){

	fast
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll t=1;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		vector<ll>v(n);
		ll sum=0LL;
		for(auto &x:v)cin>>x,sum+=(x-k);
		ll cn=0LL;
		for(auto x:v)if(x==k)cn++;
		if(cn==n)cout<<0;
		else{
			if(sum==0 || cn>0)cout<<1;
			else cout<<2;
		}
		cout<<"\n";

	}

	return 0;

}
