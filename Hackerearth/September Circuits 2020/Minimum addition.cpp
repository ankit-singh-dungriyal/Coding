    // By 'Anki'
    // Concept used: dp, bit manipulation
     
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
    #define M 100005
    #define N 32
    #define F first
    #define S second
    using u64= uint64_t;
     
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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
     
    int s=0;
    for(int i=0;i<n;i++){
        ll tmp=v[i];
        int cn=0;
        while(tmp)tmp/=2,cn++;
        s=max(s,cn);
    }
     
    vector<vector<ll>>ans(n+1,vector<ll>(N,0LL));
    for(int i=0;i<n;i++){
    	int tmp=0LL;
    	for(int j=0;j<N;j++){
    		ll k=v[i]&(1<<j);
    		if(k!=0){
    			ans[i+1][j]=ans[i][j];
    			tmp+=(1<<j);
    			// wr(tmp)
    		}
    		else ans[i+1][j]=ans[i][j]+(1<<j)-tmp;
    	}
    }

    ll q;
    cin>>q;
    while(q--){
        ll l,r;
        cin>>l>>r;
        ll res=lim;
        if(l==r)res=0LL;
        for(int i=0;i<s;i++)res=min(ans[r][i]-ans[l-1][i],res);
        cout<<res<<"\n";
        
    }
     
     
    }
     
    } 
