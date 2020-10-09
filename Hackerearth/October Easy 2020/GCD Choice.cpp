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
        for(auto &x:v)cin>>x;
     
       vector<ll>a(n+2),b(n+2);
       a[1]=v[0],b[n]=v[n-1];
       for(int i=1;i<n;i++)a[i+1]=__gcd(a[i],v[i]);
       for(int i=n-1;i>0;i--)b[i]=__gcd(b[i+1],v[i+1]);
       ll ans=0LL;
       for(int i=2;i<n;i++)ans=max(ans,__gcd(a[i-1],b[i+1]));
       ans=max(ans,max(a[n-1],b[2]));
       cout<<ans<<"\n";
    }
     
    } 
