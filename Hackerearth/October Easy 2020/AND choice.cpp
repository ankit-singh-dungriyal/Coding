    // By 'Anki'
     
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
    #define M 1003
    #define N 30
    #define F first
    #define S second
    using u64= uint64_t;
     
    vector<ll>v(300005);
     
    ll fun(ll x,ll n){
        ll cn=0LL;
        for(int i=0;i<n;i++)if((x&v[i])==x)cn++;
        return cn;
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
        ll n;
        cin>>n;
        v.resize(n);
        for(auto &x:v)cin>>x;
     
        ll ans=0,cn=0LL;
     
        for(int i=30;i>=0;i--){
            cn=fun(ans|(1<<i),n);
            if(cn>=2)ans|=(1<<i);
        }
        cout<<ans<<"\n";
      
    }
     
    } 
