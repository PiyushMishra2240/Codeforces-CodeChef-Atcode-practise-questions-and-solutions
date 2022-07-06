#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;

ll power(ll n, ll times)
{
    ll ans=1;
    for (ll i = 0; i < times; i++)
    {
        ans*=n;
    }
    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        ll ans=0;
        for (ll i = 0; i < n; i++)cin>>a[i];
        vector<ll> b=a;
        bool check=true;
        while(check){
            for(ll i=0; i<n;i++){
                if(b[i]%x == 0){
                    ans+=a[i];
                    b[i]/=x;
                }
                else{
                    ans+=accumulate(a.begin(),a.end(),0LL);
                    check=false;
                    break;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}