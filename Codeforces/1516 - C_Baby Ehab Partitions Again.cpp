/*
Contest Id: 1516
Submission Id: 114415140
Date & Time: 28/04/2021 10:20:15
Tags/Concept used: ['bitmasks', 'constructive algorithms', 'dp', 'math']
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

bool func (vector<ll>&arr, int n)
{
	int sum = 0;
	int i, j;

	for (i = 0; i < n; i++)
	sum += arr[i];

	if (sum % 2 != 0)
	return false;

	bool part[n + 1][sum / 2 + 1];

	for (i = 0; i <= sum/2; i++)
        part[0][i] = false;

	for (i = 0; i <= n; i++)
	part[i][0] = true;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= sum/2; j++)
		{
			part[i][j] = part[i-1][j];
			if (j >= arr[i - 1])
			part[i][j] = part[i][j] ||
						part[i - 1][j - arr[i -1]];

		}
	}

	return part[n][sum/2];
}




void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll sum=0;
    for(auto &x:v)cin>>x,sum+=x;
    vector<ll>tmp;
    for(auto &x:v)tmp.pb(x);
    // sort(all(tmp));
    if(sum&1){
        cout<<"0\n";
        return;
    }
    if(!func(tmp,tmp.size())){
        cout<<0<<"\n";
        return;
    }
    for(int i=0;i<n;i++){
        vector<ll>tmp;
        ll sum=0;
        for(int j=0;j<n;j++){
            if(j==i)continue;
            tmp.pb(v[j]);
            sum+=v[j];
        }
        if(sum &1){
            cout<<1<<"\n";
            cout<<i+1<<"\n";
            return;
        }
        // sort(all(tmp));
        if(!func(tmp,tmp.size())){
            cout<<1<<"\n";
            cout<<i+1<<"\n";
            return;
        }
    }



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