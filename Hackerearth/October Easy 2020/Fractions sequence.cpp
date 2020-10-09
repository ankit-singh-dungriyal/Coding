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
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll>x(n),y(n),c(n),d(n);
     
        // if(b-a<n){
        //     x[0]=1,y[0]=2;
        //     for(int i=1;i<n;i++)x[i]=x[i-1]+1,y[i]=y[i-1]+1;
        // }
        x[0]=a,y[0]=a+1;
        for(int i=1;i<n;i++)x[i]=x[i-1]+1,y[i]=y[i-1]+1;
        y[n-1]=b;
     
        if(b-a<n){
            c[0]=a,d[0]=a+1;
            for(int i=1;i<n;i++)c[i]=c[i-1]+1,d[i]=d[i-1]+1;
            for(int i=b-a-1;i<n-1;i++){
                c[i]*=d[i+1];
                d[i]*=c[i+1];
            }
        }
        if(b-a>=n)
        for(int i=0;i<n;i++)cout<<x[i]<<" "<<y[i]<<"\n";
        else
        for(int i=0;i<n;i++)cout<<c[i]<<" "<<d[i]<<"\n";
     
     
    }
     
    } 
